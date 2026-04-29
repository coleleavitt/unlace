// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5340
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5340 jmp     cs:off_1A188
//
// Resolved target: strcasecmp
// Target address:  0x1A510
// GOT/IAT slot:    0x1A188
// Slot symbol:     off_1A188
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

