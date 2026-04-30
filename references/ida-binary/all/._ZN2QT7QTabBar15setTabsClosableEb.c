// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140C0
// Name:            ._ZN2QT7QTabBar15setTabsClosableEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140C0 jmp     cs:_ZN2QT7QTabBar15setTabsClosableEb_ptr
//
// Resolved target: _ZN2QT7QTabBar15setTabsClosableEb
// Target address:  0x8D4FE0
// GOT/IAT slot:    0x8A0D00
// Slot symbol:     _ZN2QT7QTabBar15setTabsClosableEb_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QTabBar15setTabsClosableEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QTabBar15setTabsClosableEb via GOT/IAT indirection
    return _ZN2QT7QTabBar15setTabsClosableEb(/* forwarded args */);
}

