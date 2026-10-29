// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9D00
// Name:            .strncasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9D00 jmp     cs:off_2C7A668
//
// Resolved target: strncasecmp
// Target address:  0x2D118A8
// GOT/IAT slot:    0x2C7A668
// Slot symbol:     off_2C7A668
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncasecmp(/* see target signature */)
{
    // Tail-call to strncasecmp via GOT/IAT indirection
    return strncasecmp(/* forwarded args */);
}

