// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D450
// Name:            .strtoul
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D450 jmp     cs:off_4E9210
//
// Resolved target: strtoul
// Target address:  0x4EBC00
// GOT/IAT slot:    0x4E9210
// Slot symbol:     off_4E9210
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoul(/* see target signature */)
{
    // Tail-call to strtoul via GOT/IAT indirection
    return strtoul(/* forwarded args */);
}

