// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA120
// Name:            .memchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA120 jmp     cs:off_48090
//
// Resolved target: memchr
// Target address:  0x48408
// GOT/IAT slot:    0x48090
// Slot symbol:     off_48090
// Target type:     void *(const void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memchr(/* see target signature */)
{
    // Tail-call to memchr via GOT/IAT indirection
    return memchr(/* forwarded args */);
}

