// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17280
// Name:            ._ZN2QT13QGraphicsItem17mouseReleaseEventEPNS_24QGraphicsSceneMouseEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17280 jmp     cs:off_4F928
//
// Resolved target: _ZN2QT13QGraphicsItem17mouseReleaseEventEPNS_24QGraphicsSceneMouseEventE
// Target address:  0x50E30
// GOT/IAT slot:    0x4F928
// Slot symbol:     off_4F928
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this, QT::QGraphicsSceneMouseEvent *)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsItem17mouseReleaseEventEPNS_24QGraphicsSceneMouseEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsItem17mouseReleaseEventEPNS_24QGraphicsSceneMouseEventE via GOT/IAT indirection
    return _ZN2QT13QGraphicsItem17mouseReleaseEventEPNS_24QGraphicsSceneMouseEventE(/* forwarded args */);
}

