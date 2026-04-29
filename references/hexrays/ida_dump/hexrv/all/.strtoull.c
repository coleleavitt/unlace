// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6F0
// Name:            .strtoull
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6F0 jmp     cs:off_4BFB60
//
// Resolved target: strtoull
// Target address:  0x4C3060
// GOT/IAT slot:    0x4BFB60
// Slot symbol:     off_4BFB60
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoull(/* see target signature */)
{
    // Tail-call to strtoull via GOT/IAT indirection
    return strtoull(/* forwarded args */);
}

