// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x84F0
// Name:            .strncasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x84F0 jmp     cs:off_2A260
//
// Resolved target: strncasecmp
// Target address:  0x2A7D0
// GOT/IAT slot:    0x2A260
// Slot symbol:     off_2A260
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncasecmp(/* see target signature */)
{
    // Tail-call to strncasecmp via GOT/IAT indirection
    return strncasecmp(/* forwarded args */);
}

