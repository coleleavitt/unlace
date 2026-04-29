// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E8A0
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E8A0 jmp     cs:off_4E9C38
//
// Resolved target: strcmp
// Target address:  0x4EC668
// GOT/IAT slot:    0x4E9C38
// Slot symbol:     off_4E9C38
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

