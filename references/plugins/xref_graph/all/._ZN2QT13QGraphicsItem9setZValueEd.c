// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16120
// Name:            ._ZN2QT13QGraphicsItem9setZValueEd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16120 jmp     cs:off_4F078
//
// Resolved target: _ZN2QT13QGraphicsItem9setZValueEd
// Target address:  0x4FEB0
// GOT/IAT slot:    0x4F078
// Slot symbol:     off_4F078
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this, double)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsItem9setZValueEd(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsItem9setZValueEd via GOT/IAT indirection
    return _ZN2QT13QGraphicsItem9setZValueEd(/* forwarded args */);
}

