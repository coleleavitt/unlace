// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117330
// Name:            ._ZNK2QT11QEventPoint8positionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117330 jmp     cs:_ZNK2QT11QEventPoint8positionEv_ptr
//
// Resolved target: _ZNK2QT11QEventPoint8positionEv
// Target address:  0x8D7000
// GOT/IAT slot:    0x8A2638
// Slot symbol:     _ZNK2QT11QEventPoint8positionEv_ptr
// Target type:     _QWORD(QT::QEventPoint *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QEventPoint8positionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QEventPoint8positionEv via GOT/IAT indirection
    return _ZNK2QT11QEventPoint8positionEv(/* forwarded args */);
}

