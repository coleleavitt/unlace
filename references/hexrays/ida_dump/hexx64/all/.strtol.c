// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C950
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C950 jmp     cs:off_4EDC90
//
// Resolved target: strtol
// Target address:  0x4F1FC8
// GOT/IAT slot:    0x4EDC90
// Slot symbol:     off_4EDC90
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

