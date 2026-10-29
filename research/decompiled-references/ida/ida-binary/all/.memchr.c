// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118340
// Name:            .memchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118340 jmp     cs:memchr_ptr
//
// Resolved target: memchr
// Target address:  0x8D7A10
// GOT/IAT slot:    0x8A2E40
// Slot symbol:     memchr_ptr
// Target type:     void *(const void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memchr(/* see target signature */)
{
    // Tail-call to memchr via GOT/IAT indirection
    return memchr(/* forwarded args */);
}

