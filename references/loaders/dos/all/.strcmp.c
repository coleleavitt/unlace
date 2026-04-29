// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2490
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2490 jmp     cs:off_B230
//
// Resolved target: strcmp
// Target address:  0xB6D0
// GOT/IAT slot:    0xB230
// Slot symbol:     off_B230
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

