// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117050
// Name:            ._ZN2QT8QPainterC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117050 jmp     cs:_ZN2QT8QPainterC1Ev_ptr
//
// Resolved target: _ZN2QT8QPainterC1Ev
// Target address:  0x8D6DF0
// GOT/IAT slot:    0x8A24C8
// Slot symbol:     _ZN2QT8QPainterC1Ev_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QPainterC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainterC1Ev via GOT/IAT indirection
    return _ZN2QT8QPainterC1Ev(/* forwarded args */);
}

