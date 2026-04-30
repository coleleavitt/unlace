// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116500
// Name:            ._ZN2QT7QTabBar9removeTabEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116500 jmp     cs:_ZN2QT7QTabBar9removeTabEi_ptr
//
// Resolved target: _ZN2QT7QTabBar9removeTabEi
// Target address:  0x8D66D8
// GOT/IAT slot:    0x8A1F20
// Slot symbol:     _ZN2QT7QTabBar9removeTabEi_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT7QTabBar9removeTabEi(/* see target signature */)
{
    // Tail-call to _ZN2QT7QTabBar9removeTabEi via GOT/IAT indirection
    return _ZN2QT7QTabBar9removeTabEi(/* forwarded args */);
}

