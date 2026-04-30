// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117480
// Name:            ._ZNK2QT7QTabBar7tabRectEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117480 jmp     cs:_ZNK2QT7QTabBar7tabRectEi_ptr
//
// Resolved target: _ZNK2QT7QTabBar7tabRectEi
// Target address:  0x8D70D0
// GOT/IAT slot:    0x8A26E0
// Slot symbol:     _ZNK2QT7QTabBar7tabRectEi_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT7QTabBar7tabRectEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QTabBar7tabRectEi via GOT/IAT indirection
    return _ZNK2QT7QTabBar7tabRectEi(/* forwarded args */);
}

