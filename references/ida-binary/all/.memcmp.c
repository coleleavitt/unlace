// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115D20
// Name:            .memcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115D20 jmp     cs:memcmp_ptr
//
// Resolved target: memcmp
// Target address:  0x8D61F8
// GOT/IAT slot:    0x8A1B30
// Slot symbol:     memcmp_ptr
// Target type:     int(const void *s1, const void *s2, size_t n)
// ============================================================

/* see target sig */ .memcmp(/* see target signature */)
{
    // Tail-call to memcmp via GOT/IAT indirection
    return memcmp(/* forwarded args */);
}

