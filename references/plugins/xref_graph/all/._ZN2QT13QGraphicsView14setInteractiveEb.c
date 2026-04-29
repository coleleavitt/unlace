// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x169B0
// Name:            ._ZN2QT13QGraphicsView14setInteractiveEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x169B0 jmp     cs:off_4F4C0
//
// Resolved target: _ZN2QT13QGraphicsView14setInteractiveEb
// Target address:  0x50690
// GOT/IAT slot:    0x4F4C0
// Slot symbol:     off_4F4C0
// Target type:     _QWORD(QT::QGraphicsView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsView14setInteractiveEb(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsView14setInteractiveEb via GOT/IAT indirection
    return _ZN2QT13QGraphicsView14setInteractiveEb(/* forwarded args */);
}

