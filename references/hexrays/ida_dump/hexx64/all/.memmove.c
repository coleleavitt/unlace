// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CCE0
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CCE0 jmp     cs:off_4EDE58
//
// Resolved target: memmove
// Target address:  0x4F2198
// GOT/IAT slot:    0x4EDE58
// Slot symbol:     off_4EDE58
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

