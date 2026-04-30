// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114B60
// Name:            ._ZN2QT7QTabBarD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114B60 jmp     cs:_ZN2QT7QTabBarD2Ev_ptr
//
// Resolved target: _ZN2QT7QTabBarD2Ev
// Target address:  0x8D56F8
// GOT/IAT slot:    0x8A1250
// Slot symbol:     _ZN2QT7QTabBarD2Ev_ptr
// Target type:     void(QT::QTabBar *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QTabBarD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QTabBarD2Ev via GOT/IAT indirection
    return _ZN2QT7QTabBarD2Ev(/* forwarded args */);
}

