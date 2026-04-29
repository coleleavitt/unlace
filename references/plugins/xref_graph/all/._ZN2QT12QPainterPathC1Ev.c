// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17370
// Name:            ._ZN2QT12QPainterPathC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17370 jmp     cs:off_4F9A0
//
// Resolved target: _ZN2QT12QPainterPathC1Ev
// Target address:  0x50F38
// GOT/IAT slot:    0x4F9A0
// Slot symbol:     off_4F9A0
// Target type:     _QWORD(QT::QPainterPath *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QPainterPathC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT12QPainterPathC1Ev via GOT/IAT indirection
    return _ZN2QT12QPainterPathC1Ev(/* forwarded args */);
}

