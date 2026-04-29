// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22C0
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22C0 jmp     cs:off_A148
//
// Resolved target: strcmp
// Target address:  0xB420
// GOT/IAT slot:    0xA148
// Slot symbol:     off_A148
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

