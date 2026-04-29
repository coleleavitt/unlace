// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D0F0
// Name:            .isxdigit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D0F0 jmp     cs:off_B3060
//
// Resolved target: isxdigit
// Target address:  0xB37D0
// GOT/IAT slot:    0xB3060
// Slot symbol:     off_B3060
// Target type:     int(int)
// ============================================================

/* see target sig */ .isxdigit(/* see target signature */)
{
    // Tail-call to isxdigit via GOT/IAT indirection
    return isxdigit(/* forwarded args */);
}

