// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16D30
// Name:            ._ZN2QT12QPainterPathD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16D30 jmp     cs:off_4F680
//
// Resolved target: _ZN2QT12QPainterPathD1Ev
// Target address:  0x50950
// GOT/IAT slot:    0x4F680
// Slot symbol:     off_4F680
// Target type:     void(QT::QPainterPath *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QPainterPathD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT12QPainterPathD1Ev via GOT/IAT indirection
    return _ZN2QT12QPainterPathD1Ev(/* forwarded args */);
}

