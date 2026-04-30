// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119D20
// Name:            ._ZN2QT10QScrollBarD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119D20 jmp     cs:_ZN2QT10QScrollBarD2Ev_ptr
//
// Resolved target: _ZN2QT10QScrollBarD2Ev
// Target address:  0x8D8A28
// GOT/IAT slot:    0x8A3B30
// Slot symbol:     _ZN2QT10QScrollBarD2Ev_ptr
// Target type:     void(QT::QScrollBar *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT10QScrollBarD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT10QScrollBarD2Ev via GOT/IAT indirection
    return _ZN2QT10QScrollBarD2Ev(/* forwarded args */);
}

