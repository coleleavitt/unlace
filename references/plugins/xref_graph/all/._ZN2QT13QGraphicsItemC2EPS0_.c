// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16D70
// Name:            ._ZN2QT13QGraphicsItemC2EPS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16D70 jmp     cs:off_4F6A0
//
// Resolved target: _ZN2QT13QGraphicsItemC2EPS0_
// Target address:  0x50990
// GOT/IAT slot:    0x4F6A0
// Slot symbol:     off_4F6A0
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this, QT::QGraphicsItem *)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsItemC2EPS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsItemC2EPS0_ via GOT/IAT indirection
    return _ZN2QT13QGraphicsItemC2EPS0_(/* forwarded args */);
}

