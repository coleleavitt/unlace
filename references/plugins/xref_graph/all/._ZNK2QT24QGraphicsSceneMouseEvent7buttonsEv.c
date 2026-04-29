// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17030
// Name:            ._ZNK2QT24QGraphicsSceneMouseEvent7buttonsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17030 jmp     cs:off_4F800
//
// Resolved target: _ZNK2QT24QGraphicsSceneMouseEvent7buttonsEv
// Target address:  0x50C38
// GOT/IAT slot:    0x4F800
// Slot symbol:     off_4F800
// Target type:     _QWORD(QT::QGraphicsSceneMouseEvent *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT24QGraphicsSceneMouseEvent7buttonsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT24QGraphicsSceneMouseEvent7buttonsEv via GOT/IAT indirection
    return _ZNK2QT24QGraphicsSceneMouseEvent7buttonsEv(/* forwarded args */);
}

