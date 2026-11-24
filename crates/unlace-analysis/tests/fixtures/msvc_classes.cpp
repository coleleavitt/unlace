// MSVC-ABI C++ classes for the typed MSVC vftables (`vtabletypes` on a PE).
//
// Single inheritance (Square and Circle over Shape, two virtual methods each),
// multiple inheritance (Tagged over Square and Named, so Tagged has a second
// vftable for its Named subobject at a nonzero offset), a constructor the
// optimizer keeps out of line (Circle::Circle stores Circle's vftable through
// `this`) and virtual calls through base pointers it cannot devirtualize.
// Freestanding like msvc_rtti.cpp: no CRT, no virtual destructor, no new; the
// one CRT symbol the RTTI0 TypeDescriptors reference, the type_info vftable,
// is a one-cell stub.
struct Shape {
    int id;
    virtual int area(int scale) const { return id * scale; }
    virtual int sides() const { return 0; }
};
struct Square : Shape {
    int side;
    int area(int scale) const override { return side * side * scale; }
    int sides() const override { return 4; }
};
struct Circle : Shape {
    int r;
    __declspec(noinline) explicit Circle(int rr) : r(rr) {}
    int area(int scale) const override { return 3 * r * r * scale; }
};
struct Named {
    const char *name;
    virtual const char *label() const { return name; }
};
struct Tagged : Square, Named {
    int tag;
    int sides() const override { return 4 + tag; }
    const char *label() const override { return "tagged"; }
};

Square g_square;
Tagged g_tagged;

extern "C" __declspec(noinline) int total(Shape *s, int k) {
    return s->area(k) + s->sides();
}

extern "C" __declspec(noinline) const char *labelOf(Named *n) {
    return n->label();
}

extern "C" int mainCRTStartup() {
    g_square.side = 3;
    g_tagged.tag = 1;
    Circle c(2);
    Shape *volatile a = &g_square;
    Shape *volatile b = &c;
    Shape *volatile t = &g_tagged;
    Named *volatile n = &g_tagged;
    return total(a, 1) + total(b, 2) + total(t, 3) + (labelOf(n) != 0);
}

__asm__(
    ".section .rdata,\"dr\"\n"
    ".globl \"\x3f\x3f_7type_info@@6B@\"\n"
    "\"\x3f\x3f_7type_info@@6B@\":\n"
    "  .zero 8\n");
