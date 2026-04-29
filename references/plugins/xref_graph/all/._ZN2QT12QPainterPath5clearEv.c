// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16660
// Name:            ._ZN2QT12QPainterPath5clearEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16660 jmp     cs:off_4F318
//
// Resolved target: _ZN2QT12QPainterPath5clearEv
// Target address:  0x50338
// GOT/IAT slot:    0x4F318
// Slot symbol:     off_4F318
// Target type:     _QWORD(QT::QPainterPath *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QPainterPath5clearEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QPainterPath5clearEv via GOT/IAT indirection
    return _ZN2QT12QPainterPath5clearEv(/* forwarded args */);
}

