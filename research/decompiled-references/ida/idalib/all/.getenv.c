// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC630
// Name:            .getenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC630 jmp     cs:off_2C7BB00
//
// Resolved target: getenv
// Target address:  0x2D11DB8
// GOT/IAT slot:    0x2C7BB00
// Slot symbol:     off_2C7BB00
// Target type:     char *(const char *name)
// ============================================================

/* see target sig */ .getenv(/* see target signature */)
{
    // Tail-call to getenv via GOT/IAT indirection
    return getenv(/* forwarded args */);
}

