// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x164B0
// Name:            ._ZNK2QT12QPainterPath7isEmptyEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x164B0 jmp     cs:off_4F240
//
// Resolved target: _ZNK2QT12QPainterPath7isEmptyEv
// Target address:  0x501F8
// GOT/IAT slot:    0x4F240
// Slot symbol:     off_4F240
// Target type:     _QWORD(QT::QPainterPath *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT12QPainterPath7isEmptyEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT12QPainterPath7isEmptyEv via GOT/IAT indirection
    return _ZNK2QT12QPainterPath7isEmptyEv(/* forwarded args */);
}

