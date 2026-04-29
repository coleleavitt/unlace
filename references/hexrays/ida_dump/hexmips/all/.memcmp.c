// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A6A0
// Name:            .memcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A6A0 jmp     cs:off_4CD338
//
// Resolved target: memcmp
// Target address:  0x4CFD28
// GOT/IAT slot:    0x4CD338
// Slot symbol:     off_4CD338
// Target type:     int(const void *s1, const void *s2, size_t n)
// ============================================================

/* see target sig */ .memcmp(/* see target signature */)
{
    // Tail-call to memcmp via GOT/IAT indirection
    return memcmp(/* forwarded args */);
}

