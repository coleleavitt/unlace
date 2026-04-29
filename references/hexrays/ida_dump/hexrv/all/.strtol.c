// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B870
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B870 jmp     cs:off_4BFC20
//
// Resolved target: strtol
// Target address:  0x4C3128
// GOT/IAT slot:    0x4BFC20
// Slot symbol:     off_4BFC20
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

