// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116AC0
// Name:            ._ZN2QT8QPainterD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116AC0 jmp     cs:_ZN2QT8QPainterD1Ev_ptr
//
// Resolved target: _ZN2QT8QPainterD1Ev
// Target address:  0x8D6A90
// GOT/IAT slot:    0x8A2200
// Slot symbol:     _ZN2QT8QPainterD1Ev_ptr
// Target type:     void(QT::QPainter *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QPainterD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainterD1Ev via GOT/IAT indirection
    return _ZN2QT8QPainterD1Ev(/* forwarded args */);
}

