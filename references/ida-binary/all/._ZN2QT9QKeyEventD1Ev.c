// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118940
// Name:            ._ZN2QT9QKeyEventD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118940 jmp     cs:_ZN2QT9QKeyEventD1Ev_ptr
//
// Resolved target: _ZN2QT9QKeyEventD1Ev
// Target address:  0x8D7DA8
// GOT/IAT slot:    0x8A3140
// Slot symbol:     _ZN2QT9QKeyEventD1Ev_ptr
// Target type:     void(QT::QKeyEvent *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QKeyEventD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT9QKeyEventD1Ev via GOT/IAT indirection
    return _ZN2QT9QKeyEventD1Ev(/* forwarded args */);
}

