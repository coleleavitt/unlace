// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16E80
// Name:            ._ZNK2QT13QGraphicsItem10isSelectedEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16E80 jmp     cs:off_4F728
//
// Resolved target: _ZNK2QT13QGraphicsItem10isSelectedEv
// Target address:  0x50AC0
// GOT/IAT slot:    0x4F728
// Slot symbol:     off_4F728
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QGraphicsItem10isSelectedEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QGraphicsItem10isSelectedEv via GOT/IAT indirection
    return _ZNK2QT13QGraphicsItem10isSelectedEv(/* forwarded args */);
}

