#include "dwz_common.h"
__attribute__((noipa)) long area(struct point *p, int k) { return p->x * p->y + k + p->tag; }
__attribute__((noipa)) long boxw(struct box *b) { return b->hi.x - b->lo.x + b->id; }
