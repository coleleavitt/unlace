// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x170D0
// Name:            ._ZN2QT8QPainter9drawRectsEPKNS_6QRectFEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x170D0 jmp     cs:off_4F850
//
// Resolved target: _ZN2QT8QPainter9drawRectsEPKNS_6QRectFEi
// Target address:  0x50CC8
// GOT/IAT slot:    0x4F850
// Slot symbol:     off_4F850
// Target type:     _QWORD(QT::QPainter *__hidden this, const QT::QRectF *, int)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter9drawRectsEPKNS_6QRectFEi(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter9drawRectsEPKNS_6QRectFEi via GOT/IAT indirection
    return _ZN2QT8QPainter9drawRectsEPKNS_6QRectFEi(/* forwarded args */);
}

