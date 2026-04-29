// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17580
// Name:            ._ZNK2QT13QGraphicsItem9isVisibleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17580 jmp     cs:off_4FAA8
//
// Resolved target: _ZNK2QT13QGraphicsItem9isVisibleEv
// Target address:  0x51140
// GOT/IAT slot:    0x4FAA8
// Slot symbol:     off_4FAA8
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QGraphicsItem9isVisibleEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QGraphicsItem9isVisibleEv via GOT/IAT indirection
    return _ZNK2QT13QGraphicsItem9isVisibleEv(/* forwarded args */);
}

