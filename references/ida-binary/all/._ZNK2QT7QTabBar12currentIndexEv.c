// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119290
// Name:            ._ZNK2QT7QTabBar12currentIndexEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119290 jmp     cs:_ZNK2QT7QTabBar12currentIndexEv_ptr
//
// Resolved target: _ZNK2QT7QTabBar12currentIndexEv
// Target address:  0x8D8360
// GOT/IAT slot:    0x8A35E8
// Slot symbol:     _ZNK2QT7QTabBar12currentIndexEv_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QTabBar12currentIndexEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QTabBar12currentIndexEv via GOT/IAT indirection
    return _ZNK2QT7QTabBar12currentIndexEv(/* forwarded args */);
}

