// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1116B0
// Name:            ._ZNK2QT7QTabBar7tabTextEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1116B0 jmp     cs:_ZNK2QT7QTabBar7tabTextEi_ptr
//
// Resolved target: _ZNK2QT7QTabBar7tabTextEi
// Target address:  0x8D34E0
// GOT/IAT slot:    0x89F7F8
// Slot symbol:     _ZNK2QT7QTabBar7tabTextEi_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT7QTabBar7tabTextEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QTabBar7tabTextEi via GOT/IAT indirection
    return _ZNK2QT7QTabBar7tabTextEi(/* forwarded args */);
}

