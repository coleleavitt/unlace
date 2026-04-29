// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A730
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A730 jmp     cs:off_4BF380
//
// Resolved target: strncmp
// Target address:  0x4C2848
// GOT/IAT slot:    0x4BF380
// Slot symbol:     off_4BF380
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

