// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x163D0
// Name:            ._ZNK2QT13QGraphicsView9transformEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x163D0 jmp     cs:off_4F1D0
//
// Resolved target: _ZNK2QT13QGraphicsView9transformEv
// Target address:  0x500F0
// GOT/IAT slot:    0x4F1D0
// Slot symbol:     off_4F1D0
// Target type:     _QWORD(QT::QGraphicsView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QGraphicsView9transformEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QGraphicsView9transformEv via GOT/IAT indirection
    return _ZNK2QT13QGraphicsView9transformEv(/* forwarded args */);
}

