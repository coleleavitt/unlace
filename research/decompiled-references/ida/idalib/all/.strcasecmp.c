// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC950
// Name:            .strcasecmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC950 jmp     cs:off_2C7BC90
//
// Resolved target: strcasecmp
// Target address:  0x2D11E30
// GOT/IAT slot:    0x2C7BC90
// Slot symbol:     off_2C7BC90
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcasecmp(/* see target signature */)
{
    // Tail-call to strcasecmp via GOT/IAT indirection
    return strcasecmp(/* forwarded args */);
}

