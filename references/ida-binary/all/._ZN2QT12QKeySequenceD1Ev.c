// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119AD0
// Name:            ._ZN2QT12QKeySequenceD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119AD0 jmp     cs:_ZN2QT12QKeySequenceD1Ev_ptr
//
// Resolved target: _ZN2QT12QKeySequenceD1Ev
// Target address:  0x8D88C8
// GOT/IAT slot:    0x8A3A08
// Slot symbol:     _ZN2QT12QKeySequenceD1Ev_ptr
// Target type:     void(QT::QKeySequence *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QKeySequenceD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT12QKeySequenceD1Ev via GOT/IAT indirection
    return _ZN2QT12QKeySequenceD1Ev(/* forwarded args */);
}

