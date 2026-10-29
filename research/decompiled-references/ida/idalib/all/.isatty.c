// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9A10
// Name:            .isatty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9A10 jmp     cs:off_2C7A4F0
//
// Resolved target: isatty
// Target address:  0x2D11830
// GOT/IAT slot:    0x2C7A4F0
// Slot symbol:     off_2C7A4F0
// Target type:     int(int fd)
// ============================================================

/* see target sig */ .isatty(/* see target signature */)
{
    // Tail-call to isatty via GOT/IAT indirection
    return isatty(/* forwarded args */);
}

