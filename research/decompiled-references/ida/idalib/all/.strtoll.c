// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9380
// Name:            .strtoll
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9380 jmp     cs:off_2C7A1A8
//
// Resolved target: strtoll
// Target address:  0x2D11740
// GOT/IAT slot:    0x2C7A1A8
// Slot symbol:     off_2C7A1A8
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoll(/* see target signature */)
{
    // Tail-call to strtoll via GOT/IAT indirection
    return strtoll(/* forwarded args */);
}

