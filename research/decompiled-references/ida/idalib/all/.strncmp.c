// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAFF0
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAFF0 jmp     cs:off_2C7AFE0
//
// Resolved target: strncmp
// Target address:  0x2D11AD0
// GOT/IAT slot:    0x2C7AFE0
// Slot symbol:     off_2C7AFE0
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

