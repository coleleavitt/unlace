// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16D40
// Name:            ._ZNK2QT11QEventPoint8positionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16D40 jmp     cs:off_4F688
//
// Resolved target: _ZNK2QT11QEventPoint8positionEv
// Target address:  0x50960
// GOT/IAT slot:    0x4F688
// Slot symbol:     off_4F688
// Target type:     _QWORD(QT::QEventPoint *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QEventPoint8positionEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QEventPoint8positionEv via GOT/IAT indirection
    return _ZNK2QT11QEventPoint8positionEv(/* forwarded args */);
}

