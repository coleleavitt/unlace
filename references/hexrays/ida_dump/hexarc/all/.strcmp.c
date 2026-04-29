// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A840
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A840 jmp     cs:off_4B9C08
//
// Resolved target: strcmp
// Target address:  0x4BC618
// GOT/IAT slot:    0x4B9C08
// Slot symbol:     off_4B9C08
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

