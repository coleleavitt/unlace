// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x86A0
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x86A0 jmp     cs:off_2A338
//
// Resolved target: strtol
// Target address:  0x2BD50
// GOT/IAT slot:    0x2A338
// Slot symbol:     off_2A338
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

