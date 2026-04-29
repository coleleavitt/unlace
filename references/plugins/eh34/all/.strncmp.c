// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61D0
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61D0 jmp     cs:off_8D0D0
//
// Resolved target: strncmp
// Target address:  0x8D650
// GOT/IAT slot:    0x8D0D0
// Slot symbol:     off_8D0D0
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

