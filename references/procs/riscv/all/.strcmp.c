// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA770
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA770 jmp     cs:off_353A0
//
// Resolved target: strcmp
// Target address:  0x359F8
// GOT/IAT slot:    0x353A0
// Slot symbol:     off_353A0
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

