// pdb_types.cpp -- a freestanding MSVC-ABI C++ PE whose matching .pdb carries
// the TPI types, prototypes, stack and register locals, globals, a vftable and
// line numbers the `pdbtypes`/`pdblines` passes read. Built twice (x86-64 and
// i386) at /Od; the recipe is in README.md.

typedef decltype(sizeof 0) size_t;
void operator delete(void *, size_t) {}

namespace geo {

enum Color { Red = 1, Green = 2, Blue = 4 };

struct Point {
    int x;
    int y;
};

union Word {
    unsigned int whole;
    unsigned short half[2];
};

struct Rect {
    Point origin;
    Point extent;
    Color color;
    Word tag;
    Rect *next;
};

class Shape {
public:
    virtual ~Shape() {}
    virtual int area() const { return 0; }
    int id;
};

class Square : public Shape {
public:
    int side;
    int area() const override { return side * side; }
};

}  // namespace geo

geo::Rect g_rect;
int g_counter = 7;

extern "C" __declspec(noinline) int rect_area(geo::Rect *r, int scale) {
    int w = r->extent.x - r->origin.x;
    int h = r->extent.y - r->origin.y;
    int buf[4];
    buf[0] = w;
    buf[1] = h;
    buf[2] = scale;
    buf[3] = (int)r->color;
    return (buf[0] * buf[1]) * buf[2] + buf[3];
}

extern "C" __declspec(noinline) unsigned int pick_word(geo::Word w, geo::Color c) {
    if (c == geo::Blue)
        return w.half[1];
    return w.whole;
}

extern "C" __declspec(noinline) int __stdcall add_std(int a, int b) {
    int t = a + b;
    return t * g_counter;
}

__declspec(noinline) int square_area(geo::Square *s) {
    return s->area();
}

extern "C" int mainCRTStartup() {
    geo::Square sq;
    sq.side = g_counter;
    g_rect.extent.x = 4;
    g_rect.extent.y = 5;
    g_rect.color = geo::Green;
    geo::Word w;
    w.whole = 0x10002;
    return rect_area(&g_rect, 2) + (int)pick_word(w, geo::Blue) + square_area(&sq) + add_std(1, 2);
}
