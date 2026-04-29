// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C940
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C940 jmp     cs:off_4EDC88
//
// Resolved target: strcmp
// Target address:  0x4F1FC0
// GOT/IAT slot:    0x4EDC88
// Slot symbol:     off_4EDC88
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

