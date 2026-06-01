// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB820
// Name:            .memchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB820 jmp     cs:off_2C7B3F8
//
// Resolved target: memchr
// Target address:  0x2D11BE0
// GOT/IAT slot:    0x2C7B3F8
// Slot symbol:     off_2C7B3F8
// Target type:     void *(const void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memchr(/* see target signature */)
{
    // Tail-call to memchr via GOT/IAT indirection
    return memchr(/* forwarded args */);
}

