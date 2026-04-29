// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB70
// Name:            .isalpha
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB70 jmp     cs:off_4DADA0
//
// Resolved target: isalpha
// Target address:  0x4DD7C0
// GOT/IAT slot:    0x4DADA0
// Slot symbol:     off_4DADA0
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalpha(/* see target signature */)
{
    // Tail-call to isalpha via GOT/IAT indirection
    return isalpha(/* forwarded args */);
}

