// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16DF0
// Name:            ._ZN2QT13QGraphicsItem15mousePressEventEPNS_24QGraphicsSceneMouseEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16DF0 jmp     cs:off_4F6E0
//
// Resolved target: _ZN2QT13QGraphicsItem15mousePressEventEPNS_24QGraphicsSceneMouseEventE
// Target address:  0x509F0
// GOT/IAT slot:    0x4F6E0
// Slot symbol:     off_4F6E0
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this, QT::QGraphicsSceneMouseEvent *)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsItem15mousePressEventEPNS_24QGraphicsSceneMouseEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsItem15mousePressEventEPNS_24QGraphicsSceneMouseEventE via GOT/IAT indirection
    return _ZN2QT13QGraphicsItem15mousePressEventEPNS_24QGraphicsSceneMouseEventE(/* forwarded args */);
}

