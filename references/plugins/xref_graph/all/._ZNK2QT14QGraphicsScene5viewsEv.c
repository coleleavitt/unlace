// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16970
// Name:            ._ZNK2QT14QGraphicsScene5viewsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16970 jmp     cs:off_4F4A0
//
// Resolved target: _ZNK2QT14QGraphicsScene5viewsEv
// Target address:  0x50650
// GOT/IAT slot:    0x4F4A0
// Slot symbol:     off_4F4A0
// Target type:     _QWORD(QT::QGraphicsScene *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QGraphicsScene5viewsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QGraphicsScene5viewsEv via GOT/IAT indirection
    return _ZNK2QT14QGraphicsScene5viewsEv(/* forwarded args */);
}

