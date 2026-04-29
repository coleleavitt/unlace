// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E2E0
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E2E0 jmp     cs:off_4E9958
//
// Resolved target: strcasecmp
// Target address:  0x4EC378
// GOT/IAT slot:    0x4E9958
// Slot symbol:     off_4E9958
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

