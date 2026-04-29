// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16C70
// Name:            ._ZN2QT13QGraphicsItem14mouseMoveEventEPNS_24QGraphicsSceneMouseEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16C70 jmp     cs:off_4F620
//
// Resolved target: _ZN2QT13QGraphicsItem14mouseMoveEventEPNS_24QGraphicsSceneMouseEventE
// Target address:  0x508C8
// GOT/IAT slot:    0x4F620
// Slot symbol:     off_4F620
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this, QT::QGraphicsSceneMouseEvent *)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsItem14mouseMoveEventEPNS_24QGraphicsSceneMouseEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsItem14mouseMoveEventEPNS_24QGraphicsSceneMouseEventE via GOT/IAT indirection
    return _ZN2QT13QGraphicsItem14mouseMoveEventEPNS_24QGraphicsSceneMouseEventE(/* forwarded args */);
}

