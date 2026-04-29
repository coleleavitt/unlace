// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61F0
// Name:            .memcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61F0 jmp     cs:off_2D0E0
//
// Resolved target: memcmp
// Target address:  0x2D5E0
// GOT/IAT slot:    0x2D0E0
// Slot symbol:     off_2D0E0
// Target type:     int(const void *s1, const void *s2, size_t n)
// ============================================================

/* see target sig */ .memcmp(/* see target signature */)
{
    // Tail-call to memcmp via GOT/IAT indirection
    return memcmp(/* forwarded args */);
}

