// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72E0
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72E0 jmp     cs:off_26158
//
// Resolved target: strcmp
// Target address:  0x26418
// GOT/IAT slot:    0x26158
// Slot symbol:     off_26158
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

