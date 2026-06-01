// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9790
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9790 jmp     cs:off_2C7A3B0
//
// Resolved target: strtol
// Target address:  0x2D117D8
// GOT/IAT slot:    0x2C7A3B0
// Slot symbol:     off_2C7A3B0
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

