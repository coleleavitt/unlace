// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16E20
// Name:            ._ZNK2QT24QGraphicsSceneMouseEvent8scenePosEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16E20 jmp     cs:off_4F6F8
//
// Resolved target: _ZNK2QT24QGraphicsSceneMouseEvent8scenePosEv
// Target address:  0x50A40
// GOT/IAT slot:    0x4F6F8
// Slot symbol:     off_4F6F8
// Target type:     _QWORD(QT::QGraphicsSceneMouseEvent *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT24QGraphicsSceneMouseEvent8scenePosEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT24QGraphicsSceneMouseEvent8scenePosEv via GOT/IAT indirection
    return _ZNK2QT24QGraphicsSceneMouseEvent8scenePosEv(/* forwarded args */);
}

