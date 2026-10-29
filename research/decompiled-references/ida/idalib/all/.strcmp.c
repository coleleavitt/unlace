// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC960
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC960 jmp     cs:off_2C7BC98
//
// Resolved target: strcmp
// Target address:  0x2D11E38
// GOT/IAT slot:    0x2C7BC98
// Slot symbol:     off_2C7BC98
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

