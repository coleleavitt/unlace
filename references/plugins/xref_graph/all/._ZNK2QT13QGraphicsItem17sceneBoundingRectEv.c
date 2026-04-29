// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16FE0
// Name:            ._ZNK2QT13QGraphicsItem17sceneBoundingRectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16FE0 jmp     cs:off_4F7D8
//
// Resolved target: _ZNK2QT13QGraphicsItem17sceneBoundingRectEv
// Target address:  0x50C00
// GOT/IAT slot:    0x4F7D8
// Slot symbol:     off_4F7D8
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QGraphicsItem17sceneBoundingRectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QGraphicsItem17sceneBoundingRectEv via GOT/IAT indirection
    return _ZNK2QT13QGraphicsItem17sceneBoundingRectEv(/* forwarded args */);
}

