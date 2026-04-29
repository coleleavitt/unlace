// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1200
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1200 jmp     cs:off_50E8
//
// Resolved target: strcmp
// Target address:  0x5288
// GOT/IAT slot:    0x50E8
// Slot symbol:     off_50E8
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

