// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x174B0
// Name:            ._ZN2QT4QPenD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x174B0 jmp     cs:off_4FA40
//
// Resolved target: _ZN2QT4QPenD1Ev
// Target address:  0x51038
// GOT/IAT slot:    0x4FA40
// Slot symbol:     off_4FA40
// Target type:     void(QT::QPen *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT4QPenD1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT4QPenD1Ev via GOT/IAT indirection
    return _ZN2QT4QPenD1Ev(/* forwarded args */);
}

