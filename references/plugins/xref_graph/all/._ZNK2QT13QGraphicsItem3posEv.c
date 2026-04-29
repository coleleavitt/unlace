// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16F20
// Name:            ._ZNK2QT13QGraphicsItem3posEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16F20 jmp     cs:off_4F778
//
// Resolved target: _ZNK2QT13QGraphicsItem3posEv
// Target address:  0x50B50
// GOT/IAT slot:    0x4F778
// Slot symbol:     off_4F778
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QGraphicsItem3posEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QGraphicsItem3posEv via GOT/IAT indirection
    return _ZNK2QT13QGraphicsItem3posEv(/* forwarded args */);
}

