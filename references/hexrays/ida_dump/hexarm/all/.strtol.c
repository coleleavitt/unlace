// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E8B0
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E8B0 jmp     cs:off_4E9C40
//
// Resolved target: strtol
// Target address:  0x4EC670
// GOT/IAT slot:    0x4E9C40
// Slot symbol:     off_4E9C40
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

