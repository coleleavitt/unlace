// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9700
// Name:            .strtoul
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9700 jmp     cs:off_2C7A368
//
// Resolved target: strtoul
// Target address:  0x2D117B8
// GOT/IAT slot:    0x2C7A368
// Slot symbol:     off_2C7A368
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoul(/* see target signature */)
{
    // Tail-call to strtoul via GOT/IAT indirection
    return strtoul(/* forwarded args */);
}

