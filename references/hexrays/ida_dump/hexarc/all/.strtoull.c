// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A6D0
// Name:            .strtoull
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A6D0 jmp     cs:off_4B9B50
//
// Resolved target: strtoull
// Target address:  0x4BC558
// GOT/IAT slot:    0x4B9B50
// Slot symbol:     off_4B9B50
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoull(/* see target signature */)
{
    // Tail-call to strtoull via GOT/IAT indirection
    return strtoull(/* forwarded args */);
}

