// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2220
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2220 jmp     cs:off_80F8
//
// Resolved target: strcmp
// Target address:  0x82D8
// GOT/IAT slot:    0x80F8
// Slot symbol:     off_80F8
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

