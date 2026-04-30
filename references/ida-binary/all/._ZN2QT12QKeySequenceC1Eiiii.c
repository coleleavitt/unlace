// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115700
// Name:            ._ZN2QT12QKeySequenceC1Eiiii
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115700 jmp     cs:_ZN2QT12QKeySequenceC1Eiiii_ptr
//
// Resolved target: _ZN2QT12QKeySequenceC1Eiiii
// Target address:  0x8D5E20
// GOT/IAT slot:    0x8A1820
// Slot symbol:     _ZN2QT12QKeySequenceC1Eiiii_ptr
// Target type:     _QWORD(QT::QKeySequence *__hidden this, int, int, int, int)
// ============================================================

/* see target sig */ ._ZN2QT12QKeySequenceC1Eiiii(/* see target signature */)
{
    // Tail-call to _ZN2QT12QKeySequenceC1Eiiii via GOT/IAT indirection
    return _ZN2QT12QKeySequenceC1Eiiii(/* forwarded args */);
}

