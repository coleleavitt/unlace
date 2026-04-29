// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A2A0
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A2A0 jmp     cs:off_4B9938
//
// Resolved target: strcasecmp
// Target address:  0x4BC338
// GOT/IAT slot:    0x4B9938
// Slot symbol:     off_4B9938
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

