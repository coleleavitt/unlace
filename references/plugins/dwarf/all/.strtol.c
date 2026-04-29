// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA9F0
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA9F0 jmp     cs:off_CA4E0
//
// Resolved target: strtol
// Target address:  0xD0E28
// GOT/IAT slot:    0xCA4E0
// Slot symbol:     off_CA4E0
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

