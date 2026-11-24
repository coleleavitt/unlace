struct point { long x; long y; char tag; };
struct box { struct point lo, hi; int id; };
long area(struct point *p, int k);
long boxw(struct box *b);
