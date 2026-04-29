// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6100
// Name:            .isxdigit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6100 jmp     cs:off_2D068
//
// Resolved target: isxdigit
// Target address:  0x2D568
// GOT/IAT slot:    0x2D068
// Slot symbol:     off_2D068
// Target type:     int(int)
// ============================================================

/* see target sig */ .isxdigit(/* see target signature */)
{
    // Tail-call to isxdigit via GOT/IAT indirection
    return isxdigit(/* forwarded args */);
}

