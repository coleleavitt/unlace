// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17260
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17260 jmp     cs:off_4F918
//
// Resolved target: strcmp
// Target address:  0x50E18
// GOT/IAT slot:    0x4F918
// Slot symbol:     off_4F918
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

