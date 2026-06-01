// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114AF0
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114AF0 jmp     cs:strtol_ptr
//
// Resolved target: strtol
// Target address:  0x8D56B0
// GOT/IAT slot:    0x8A1218
// Slot symbol:     strtol_ptr
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

