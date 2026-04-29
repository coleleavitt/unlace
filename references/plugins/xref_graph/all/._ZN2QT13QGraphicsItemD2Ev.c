// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17150
// Name:            ._ZN2QT13QGraphicsItemD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17150 jmp     cs:off_4F890
//
// Resolved target: _ZN2QT13QGraphicsItemD2Ev
// Target address:  0x50D40
// GOT/IAT slot:    0x4F890
// Slot symbol:     off_4F890
// Target type:     void(QT::QGraphicsItem *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsItemD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsItemD2Ev via GOT/IAT indirection
    return _ZN2QT13QGraphicsItemD2Ev(/* forwarded args */);
}

