// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23C0
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23C0 jmp     cs:off_B1C8
//
// Resolved target: strcasecmp
// Target address:  0xB660
// GOT/IAT slot:    0xB1C8
// Slot symbol:     off_B1C8
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

