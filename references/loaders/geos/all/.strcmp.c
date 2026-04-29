// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2320
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2320 jmp     cs:off_8178
//
// Resolved target: strcmp
// Target address:  0x83E0
// GOT/IAT slot:    0x8178
// Slot symbol:     off_8178
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

