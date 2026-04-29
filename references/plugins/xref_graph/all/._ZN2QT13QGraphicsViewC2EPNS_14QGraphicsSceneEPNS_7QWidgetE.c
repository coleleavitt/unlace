// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16E40
// Name:            ._ZN2QT13QGraphicsViewC2EPNS_14QGraphicsSceneEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16E40 jmp     cs:off_4F708
//
// Resolved target: _ZN2QT13QGraphicsViewC2EPNS_14QGraphicsSceneEPNS_7QWidgetE
// Target address:  0x50A80
// GOT/IAT slot:    0x4F708
// Slot symbol:     off_4F708
// Target type:     _QWORD(QT::QGraphicsView *__hidden this, QT::QGraphicsScene *, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsViewC2EPNS_14QGraphicsSceneEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsViewC2EPNS_14QGraphicsSceneEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT13QGraphicsViewC2EPNS_14QGraphicsSceneEPNS_7QWidgetE(/* forwarded args */);
}

