// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A730
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A730 jmp     cs:off_4DA380
//
// Resolved target: strncmp
// Target address:  0x4DCD50
// GOT/IAT slot:    0x4DA380
// Slot symbol:     off_4DA380
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

