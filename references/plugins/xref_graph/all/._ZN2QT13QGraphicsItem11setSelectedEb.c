// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16EA0
// Name:            ._ZN2QT13QGraphicsItem11setSelectedEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16EA0 jmp     cs:off_4F738
//
// Resolved target: _ZN2QT13QGraphicsItem11setSelectedEb
// Target address:  0x50AD8
// GOT/IAT slot:    0x4F738
// Slot symbol:     off_4F738
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsItem11setSelectedEb(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsItem11setSelectedEb via GOT/IAT indirection
    return _ZN2QT13QGraphicsItem11setSelectedEb(/* forwarded args */);
}

