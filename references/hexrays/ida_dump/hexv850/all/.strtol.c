// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B880
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B880 jmp     cs:off_4C0C28
//
// Resolved target: strtol
// Target address:  0x4C3C30
// GOT/IAT slot:    0x4C0C28
// Slot symbol:     off_4C0C28
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

