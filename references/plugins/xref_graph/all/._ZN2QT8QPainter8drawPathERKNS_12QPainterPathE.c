// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x173A0
// Name:            ._ZN2QT8QPainter8drawPathERKNS_12QPainterPathE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x173A0 jmp     cs:off_4F9B8
//
// Resolved target: _ZN2QT8QPainter8drawPathERKNS_12QPainterPathE
// Target address:  0x50F50
// GOT/IAT slot:    0x4F9B8
// Slot symbol:     off_4F9B8
// Target type:     _QWORD(QT::QPainter *__hidden this, const QT::QPainterPath *)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter8drawPathERKNS_12QPainterPathE(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter8drawPathERKNS_12QPainterPathE via GOT/IAT indirection
    return _ZN2QT8QPainter8drawPathERKNS_12QPainterPathE(/* forwarded args */);
}

