// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29730
// Name:            .strncmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29730 jmp     cs:off_4B9380
//
// Resolved target: strncmp
// Target address:  0x4BBD50
// GOT/IAT slot:    0x4B9380
// Slot symbol:     off_4B9380
// Target type:     int(const char *s1, const char *s2, size_t n)
// ============================================================

/* see target sig */ .strncmp(/* see target signature */)
{
    // Tail-call to strncmp via GOT/IAT indirection
    return strncmp(/* forwarded args */);
}

