// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E730
// Name:            .strtoull
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E730 jmp     cs:off_4E9B80
//
// Resolved target: strtoull
// Target address:  0x4EC5A8
// GOT/IAT slot:    0x4E9B80
// Slot symbol:     off_4E9B80
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoull(/* see target signature */)
{
    // Tail-call to strtoull via GOT/IAT indirection
    return strtoull(/* forwarded args */);
}

