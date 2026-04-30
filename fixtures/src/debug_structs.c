#include <stdio.h>
struct Point { int x; int y; };
struct Rect { struct Point origin; struct Point size; };
int area(struct Rect *r) { return r->size.x * r->size.y; }
struct Point offset(struct Point p, int dx, int dy) { p.x += dx; p.y += dy; return p; }
int main(void) { struct Rect r = {{0,0},{10,20}}; printf("%d\n", area(&r)); return 0; }
