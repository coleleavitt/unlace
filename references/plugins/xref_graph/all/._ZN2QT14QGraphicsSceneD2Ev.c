// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16070
// Name:            ._ZN2QT14QGraphicsSceneD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16070 jmp     cs:off_4F020
//
// Resolved target: _ZN2QT14QGraphicsSceneD2Ev
// Target address:  0x4FE48
// GOT/IAT slot:    0x4F020
// Slot symbol:     off_4F020
// Target type:     void(QT::QGraphicsScene *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT14QGraphicsSceneD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT14QGraphicsSceneD2Ev via GOT/IAT indirection
    return _ZN2QT14QGraphicsSceneD2Ev(/* forwarded args */);
}

