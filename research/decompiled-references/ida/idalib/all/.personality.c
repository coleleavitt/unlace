// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA950
// Name:            .personality
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA950 jmp     cs:off_2C7AC90
//
// Resolved target: personality
// Target address:  0x2D119D0
// GOT/IAT slot:    0x2C7AC90
// Slot symbol:     off_2C7AC90
// Target type:     int(unsigned __int64 persona)
// ============================================================

/* see target sig */ .personality(/* see target signature */)
{
    // Tail-call to personality via GOT/IAT indirection
    return personality(/* forwarded args */);
}

