// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x296A0
// Name:            .memcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x296A0 jmp     cs:off_4B9338
//
// Resolved target: memcmp
// Target address:  0x4BBD08
// GOT/IAT slot:    0x4B9338
// Slot symbol:     off_4B9338
// Target type:     int(const void *s1, const void *s2, size_t n)
// ============================================================

/* see target sig */ .memcmp(/* see target signature */)
{
    // Tail-call to memcmp via GOT/IAT indirection
    return memcmp(/* forwarded args */);
}

