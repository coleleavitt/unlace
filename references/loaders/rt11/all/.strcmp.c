// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11D0
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11D0 jmp     cs:off_50D0
//
// Resolved target: strcmp
// Target address:  0x5250
// GOT/IAT slot:    0x50D0
// Slot symbol:     off_50D0
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

