// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3470
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3470 jmp     cs:off_20220
//
// Resolved target: strcmp
// Target address:  0x21B48
// GOT/IAT slot:    0x20220
// Slot symbol:     off_20220
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

