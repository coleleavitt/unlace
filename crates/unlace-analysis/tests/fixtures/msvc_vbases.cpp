// MSVC-ABI C++ virtual inheritance for the typed MSVC vftables
// (`vtabletypes` on a PE): a vftable serving a virtual base, and constructors
// the dynamic initializer calls.
//
// Base is a virtual base of Left and Right; Both derives from both, so Both
// keeps Right's vftable at Right's offset and Base's at the virtual base's
// offset, which only its vbtable states. Left adds no virtual method, so it has
// no vftable of its own. g_both needs a dynamic initializer, so Both::Both,
// Left::Left and Right::Right are out-of-line functions that store their
// vftables and vbtables through `this`. Freestanding like msvc_rtti.cpp (the
// initializer is emitted but never run).
struct Base {
    int b;
    virtual int get() const { return b; }
    virtual int twice() const { return 2 * b; }
};
struct Left : virtual Base {
    int l;
    __declspec(noinline) Left() : l(1) {}
    int get() const override { return l; }
};
struct Right : virtual Base {
    int r;
    __declspec(noinline) Right() : r(2) {}
    virtual int right() const { return r; }
};
struct Both : Left, Right {
    int x;
    __declspec(noinline) Both() : x(3) {}
    int twice() const override { return x; }
};

Both g_both;

extern "C" __declspec(noinline) int useBase(Base *p) {
    return p->get() + p->twice();
}

extern "C" __declspec(noinline) int useRight(Right *p) {
    return p->right();
}

extern "C" int mainCRTStartup() {
    Both *volatile p = &g_both;
    return useBase(p) + useRight(p);
}

__asm__(
    ".section .rdata,\"dr\"\n"
    ".globl \"\x3f\x3f_7type_info@@6B@\"\n"
    "\"\x3f\x3f_7type_info@@6B@\":\n"
    "  .zero 8\n");
