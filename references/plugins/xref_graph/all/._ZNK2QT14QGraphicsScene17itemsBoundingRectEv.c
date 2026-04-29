// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16510
// Name:            ._ZNK2QT14QGraphicsScene17itemsBoundingRectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16510 jmp     cs:off_4F270
//
// Resolved target: _ZNK2QT14QGraphicsScene17itemsBoundingRectEv
// Target address:  0x50238
// GOT/IAT slot:    0x4F270
// Slot symbol:     off_4F270
// Target type:     _QWORD(QT::QGraphicsScene *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QGraphicsScene17itemsBoundingRectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QGraphicsScene17itemsBoundingRectEv via GOT/IAT indirection
    return _ZNK2QT14QGraphicsScene17itemsBoundingRectEv(/* forwarded args */);
}

