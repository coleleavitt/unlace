// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C360
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C360 jmp     cs:off_4ED998
//
// Resolved target: strcasecmp
// Target address:  0x4F1CB8
// GOT/IAT slot:    0x4ED998
// Slot symbol:     off_4ED998
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

