// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34B0
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34B0 jmp     cs:off_14240
//
// Resolved target: strcmp
// Target address:  0x14840
// GOT/IAT slot:    0x14240
// Slot symbol:     off_14240
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

