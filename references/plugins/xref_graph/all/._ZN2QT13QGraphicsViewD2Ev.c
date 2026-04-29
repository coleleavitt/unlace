// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16760
// Name:            ._ZN2QT13QGraphicsViewD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16760 jmp     cs:off_4F398
//
// Resolved target: _ZN2QT13QGraphicsViewD2Ev
// Target address:  0x503F0
// GOT/IAT slot:    0x4F398
// Slot symbol:     off_4F398
// Target type:     void(QT::QGraphicsView *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsViewD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsViewD2Ev via GOT/IAT indirection
    return _ZN2QT13QGraphicsViewD2Ev(/* forwarded args */);
}

