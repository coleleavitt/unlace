// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16550
// Name:            ._ZNK2QT24QGraphicsSceneMouseEvent9modifiersEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16550 jmp     cs:off_4F290
//
// Resolved target: _ZNK2QT24QGraphicsSceneMouseEvent9modifiersEv
// Target address:  0x50260
// GOT/IAT slot:    0x4F290
// Slot symbol:     off_4F290
// Target type:     _QWORD(QT::QGraphicsSceneMouseEvent *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT24QGraphicsSceneMouseEvent9modifiersEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT24QGraphicsSceneMouseEvent9modifiersEv via GOT/IAT indirection
    return _ZNK2QT24QGraphicsSceneMouseEvent9modifiersEv(/* forwarded args */);
}

