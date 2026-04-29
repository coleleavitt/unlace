// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2250
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2250 jmp     cs:off_13110
//
// Resolved target: strcmp
// Target address:  0x133A8
// GOT/IAT slot:    0x13110
// Slot symbol:     off_13110
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

