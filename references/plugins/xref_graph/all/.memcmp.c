// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16A20
// Name:            .memcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16A20 jmp     cs:off_4F4F8
//
// Resolved target: memcmp
// Target address:  0x50720
// GOT/IAT slot:    0x4F4F8
// Slot symbol:     off_4F4F8
// Target type:     int(const void *s1, const void *s2, size_t n)
// ============================================================

/* see target sig */ .memcmp(/* see target signature */)
{
    // Tail-call to memcmp via GOT/IAT indirection
    return memcmp(/* forwarded args */);
}

