// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA550
// Name:            .memcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA550 jmp     cs:off_482A8
//
// Resolved target: memcmp
// Target address:  0x48568
// GOT/IAT slot:    0x482A8
// Slot symbol:     off_482A8
// Target type:     int(const void *s1, const void *s2, size_t n)
// ============================================================

/* see target sig */ .memcmp(/* see target signature */)
{
    // Tail-call to memcmp via GOT/IAT indirection
    return memcmp(/* forwarded args */);
}

