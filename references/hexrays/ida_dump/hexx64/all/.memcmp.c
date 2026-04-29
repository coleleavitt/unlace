// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6D0
// Name:            .memcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6D0 jmp     cs:off_4ED350
//
// Resolved target: memcmp
// Target address:  0x4F1648
// GOT/IAT slot:    0x4ED350
// Slot symbol:     off_4ED350
// Target type:     int(const void *s1, const void *s2, size_t n)
// ============================================================

/* see target sig */ .memcmp(/* see target signature */)
{
    // Tail-call to memcmp via GOT/IAT indirection
    return memcmp(/* forwarded args */);
}

