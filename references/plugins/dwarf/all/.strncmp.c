// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2B0
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2B0 jmp     cs:off_CA140
//
// Resolved target: strncmp
// Target address:  0xD0A70
// GOT/IAT slot:    0xCA140
// Slot symbol:     off_CA140
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

