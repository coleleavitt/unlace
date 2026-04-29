// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16340
// Name:            ._ZNK2QT14QGraphicsScene13selectedItemsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16340 jmp     cs:off_4F188
//
// Resolved target: _ZNK2QT14QGraphicsScene13selectedItemsEv
// Target address:  0x50078
// GOT/IAT slot:    0x4F188
// Slot symbol:     off_4F188
// Target type:     _QWORD(QT::QGraphicsScene *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT14QGraphicsScene13selectedItemsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT14QGraphicsScene13selectedItemsEv via GOT/IAT indirection
    return _ZNK2QT14QGraphicsScene13selectedItemsEv(/* forwarded args */);
}

