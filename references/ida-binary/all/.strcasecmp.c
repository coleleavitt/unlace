// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A020
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A020 jmp     cs:strcasecmp_ptr
//
// Resolved target: strcasecmp
// Target address:  0x8D8C28
// GOT/IAT slot:    0x8A3CB0
// Slot symbol:     strcasecmp_ptr
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

