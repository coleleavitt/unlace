// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C7C0
// Name:            .strtoull
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C7C0 jmp     cs:off_4EDBC8
//
// Resolved target: strtoull
// Target address:  0x4F1EF8
// GOT/IAT slot:    0x4EDBC8
// Slot symbol:     off_4EDBC8
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoull(/* see target signature */)
{
    // Tail-call to strtoull via GOT/IAT indirection
    return strtoull(/* forwarded args */);
}

