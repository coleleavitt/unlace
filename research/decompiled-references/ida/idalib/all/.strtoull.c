// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC940
// Name:            .strtoull
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC940 jmp     cs:off_2C7BC88
//
// Resolved target: strtoull
// Target address:  0x2D11E28
// GOT/IAT slot:    0x2C7BC88
// Slot symbol:     off_2C7BC88
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoull(/* see target signature */)
{
    // Tail-call to strtoull via GOT/IAT indirection
    return strtoull(/* forwarded args */);
}

