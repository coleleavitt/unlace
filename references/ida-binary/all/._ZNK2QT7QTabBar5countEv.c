// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119000
// Name:            ._ZNK2QT7QTabBar5countEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119000 jmp     cs:_ZNK2QT7QTabBar5countEv_ptr
//
// Resolved target: _ZNK2QT7QTabBar5countEv
// Target address:  0x8D81C8
// GOT/IAT slot:    0x8A34A0
// Slot symbol:     _ZNK2QT7QTabBar5countEv_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QTabBar5countEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QTabBar5countEv via GOT/IAT indirection
    return _ZNK2QT7QTabBar5countEv(/* forwarded args */);
}

