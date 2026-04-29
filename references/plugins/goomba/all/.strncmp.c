// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4280
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4280 jmp     cs:off_4E128
//
// Resolved target: strncmp
// Target address:  0x4F730
// GOT/IAT slot:    0x4E128
// Slot symbol:     off_4E128
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

