// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16D90
// Name:            ._ZN2QT12QPainterPathC1ERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16D90 jmp     cs:off_4F6B0
//
// Resolved target: _ZN2QT12QPainterPathC1ERKS0_
// Target address:  0x509B8
// GOT/IAT slot:    0x4F6B0
// Slot symbol:     off_4F6B0
// Target type:     _QWORD(QT::QPainterPath *__hidden this, const QT::QPainterPath *)
// ============================================================

/* see target sig */ ._ZN2QT12QPainterPathC1ERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT12QPainterPathC1ERKS0_ via GOT/IAT indirection
    return _ZN2QT12QPainterPathC1ERKS0_(/* forwarded args */);
}

