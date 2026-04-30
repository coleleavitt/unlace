// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117920
// Name:            ._ZN2QT8QPainterD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117920 jmp     cs:_ZN2QT8QPainterD2Ev_ptr
//
// Resolved target: _ZN2QT8QPainterD2Ev
// Target address:  0x8D73B0
// GOT/IAT slot:    0x8A2930
// Slot symbol:     _ZN2QT8QPainterD2Ev_ptr
// Target type:     void(QT::QPainter *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QPainterD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainterD2Ev via GOT/IAT indirection
    return _ZN2QT8QPainterD2Ev(/* forwarded args */);
}

