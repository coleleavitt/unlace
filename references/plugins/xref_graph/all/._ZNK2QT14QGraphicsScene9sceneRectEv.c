// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16B40
// Name:            ._ZNK2QT14QGraphicsScene9sceneRectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16B40 jmp     cs:off_4F588
//
// Resolved target: _ZNK2QT14QGraphicsScene9sceneRectEv
// Target address:  0x507D0
// GOT/IAT slot:    0x4F588
// Slot symbol:     off_4F588
// Target type:     _QWORD(QT::QGraphicsScene *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QGraphicsScene9sceneRectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QGraphicsScene9sceneRectEv via GOT/IAT indirection
    return _ZNK2QT14QGraphicsScene9sceneRectEv(/* forwarded args */);
}

