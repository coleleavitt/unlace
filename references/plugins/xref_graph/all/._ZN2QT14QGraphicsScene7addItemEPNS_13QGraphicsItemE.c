// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x173C0
// Name:            ._ZN2QT14QGraphicsScene7addItemEPNS_13QGraphicsItemE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x173C0 jmp     cs:off_4F9C8
//
// Resolved target: _ZN2QT14QGraphicsScene7addItemEPNS_13QGraphicsItemE
// Target address:  0x50F80
// GOT/IAT slot:    0x4F9C8
// Slot symbol:     off_4F9C8
// Target type:     _QWORD(QT::QGraphicsScene *__hidden this, QT::QGraphicsItem *)
// ============================================================

/* see target sig */ ._ZN2QT14QGraphicsScene7addItemEPNS_13QGraphicsItemE(/* see target signature */)
{
    // Tail-call to _ZN2QT14QGraphicsScene7addItemEPNS_13QGraphicsItemE via GOT/IAT indirection
    return _ZN2QT14QGraphicsScene7addItemEPNS_13QGraphicsItemE(/* forwarded args */);
}

