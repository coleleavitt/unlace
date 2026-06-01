// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA0F0
// Name:            .memcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA0F0 jmp     cs:off_2C7A860
//
// Resolved target: memcmp
// Target address:  0x2D11910
// GOT/IAT slot:    0x2C7A860
// Slot symbol:     off_2C7A860
// Target type:     int(const void *s1, const void *s2, size_t n)
// ============================================================

/* see target sig */ .memcmp(/* see target signature */)
{
    // Tail-call to memcmp via GOT/IAT indirection
    return memcmp(/* forwarded args */);
}

