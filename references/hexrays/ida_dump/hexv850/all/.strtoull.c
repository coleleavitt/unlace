// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B700
// Name:            .strtoull
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B700 jmp     cs:off_4C0B68
//
// Resolved target: strtoull
// Target address:  0x4C3B68
// GOT/IAT slot:    0x4C0B68
// Slot symbol:     off_4C0B68
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoull(/* see target signature */)
{
    // Tail-call to strtoull via GOT/IAT indirection
    return strtoull(/* forwarded args */);
}

