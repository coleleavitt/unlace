// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4600
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4600 jmp     cs:off_232E8
//
// Resolved target: strtol
// Target address:  0x23710
// GOT/IAT slot:    0x232E8
// Slot symbol:     off_232E8
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

