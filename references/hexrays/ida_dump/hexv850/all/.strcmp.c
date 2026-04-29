// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B870
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B870 jmp     cs:off_4C0C20
//
// Resolved target: strcmp
// Target address:  0x4C3C28
// GOT/IAT slot:    0x4C0C20
// Slot symbol:     off_4C0C20
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

