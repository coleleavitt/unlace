// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113A00
// Name:            ._ZN2QT8QPainterC2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113A00 jmp     cs:_ZN2QT8QPainterC2Ev_ptr
//
// Resolved target: _ZN2QT8QPainterC2Ev
// Target address:  0x8D4B98
// GOT/IAT slot:    0x8A09A0
// Slot symbol:     _ZN2QT8QPainterC2Ev_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QPainterC2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainterC2Ev via GOT/IAT indirection
    return _ZN2QT8QPainterC2Ev(/* forwarded args */);
}

