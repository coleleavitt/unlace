// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10C0
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10C0 jmp     cs:off_4048
//
// Resolved target: strncmp
// Target address:  0x5188
// GOT/IAT slot:    0x4048
// Slot symbol:     off_4048
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

