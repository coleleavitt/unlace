// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2230
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2230 jmp     cs:off_8100
//
// Resolved target: strtol
// Target address:  0x82E0
// GOT/IAT slot:    0x8100
// Slot symbol:     off_8100
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

