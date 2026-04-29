// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16220
// Name:            ._ZN2QT13QGraphicsItem20setAcceptHoverEventsEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16220 jmp     cs:off_4F0F8
//
// Resolved target: _ZN2QT13QGraphicsItem20setAcceptHoverEventsEb
// Target address:  0x4FF80
// GOT/IAT slot:    0x4F0F8
// Slot symbol:     off_4F0F8
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsItem20setAcceptHoverEventsEb(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsItem20setAcceptHoverEventsEb via GOT/IAT indirection
    return _ZN2QT13QGraphicsItem20setAcceptHoverEventsEb(/* forwarded args */);
}

