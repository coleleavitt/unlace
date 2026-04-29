// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B860
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B860 jmp     cs:off_4DAC18
//
// Resolved target: strcmp
// Target address:  0x4DD628
// GOT/IAT slot:    0x4DAC18
// Slot symbol:     off_4DAC18
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

