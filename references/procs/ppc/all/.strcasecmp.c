// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20960
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20960 jmp     cs:off_95498
//
// Resolved target: strcasecmp
// Target address:  0x95ED0
// GOT/IAT slot:    0x95498
// Slot symbol:     off_95498
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

