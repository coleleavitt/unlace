// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D6B0
// Name:            .memcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D6B0 jmp     cs:off_4E9340
//
// Resolved target: memcmp
// Target address:  0x4EBD30
// GOT/IAT slot:    0x4E9340
// Slot symbol:     off_4E9340
// Target type:     int(const void *s1, const void *s2, size_t n)
// ============================================================

/* see target sig */ .memcmp(/* see target signature */)
{
    // Tail-call to memcmp via GOT/IAT indirection
    return memcmp(/* forwarded args */);
}

