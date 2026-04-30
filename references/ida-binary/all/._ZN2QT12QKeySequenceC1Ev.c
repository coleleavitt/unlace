// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BCA0
// Name:            ._ZN2QT12QKeySequenceC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BCA0 jmp     cs:_ZN2QT12QKeySequenceC1Ev_ptr
//
// Resolved target: _ZN2QT12QKeySequenceC1Ev
// Target address:  0x8D9E20
// GOT/IAT slot:    0x8A4AF0
// Slot symbol:     _ZN2QT12QKeySequenceC1Ev_ptr
// Target type:     _QWORD(QT::QKeySequence *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QKeySequenceC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT12QKeySequenceC1Ev via GOT/IAT indirection
    return _ZN2QT12QKeySequenceC1Ev(/* forwarded args */);
}

