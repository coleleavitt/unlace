// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6510
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6510 jmp     cs:off_24270
//
// Resolved target: strcasecmp
// Target address:  0x26040
// GOT/IAT slot:    0x24270
// Slot symbol:     off_24270
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

