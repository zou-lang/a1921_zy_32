#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main(int atgc, char **argv)
{
    List *list = (List *)malloc(sizeof(List));
    initList(list);
    addHead(list, 4);
    addHead(list, 6);
    addHead(list, 8);
    addHead(list, 10);
    dispList(list);
    printf("the list: %d\n", getLength(list));
    CreatList();
    Delect();
    Print();
    printf("\n");
    return 0;
}
