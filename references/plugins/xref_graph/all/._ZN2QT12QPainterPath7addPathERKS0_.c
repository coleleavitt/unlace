// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x165E0
// Name:            ._ZN2QT12QPainterPath7addPathERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x165E0 jmp     cs:off_4F2D8
//
// Resolved target: _ZN2QT12QPainterPath7addPathERKS0_
// Target address:  0x502D0
// GOT/IAT slot:    0x4F2D8
// Slot symbol:     off_4F2D8
// Target type:     _QWORD(QT::QPainterPath *__hidden this, const QT::QPainterPath *)
// ============================================================

/* see target sig */ ._ZN2QT12QPainterPath7addPathERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT12QPainterPath7addPathERKS0_ via GOT/IAT indirection
    return _ZN2QT12QPainterPath7addPathERKS0_(/* forwarded args */);
}

