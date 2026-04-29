// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x47F0
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x47F0 jmp     cs:off_4E3E0
//
// Resolved target: strcmp
// Target address:  0x4FA00
// GOT/IAT slot:    0x4E3E0
// Slot symbol:     off_4E3E0
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

