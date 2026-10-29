// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7690
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7690 jmp     cs:off_2C79330
//
// Resolved target: memmove
// Target address:  0x2D113F0
// GOT/IAT slot:    0x2C79330
// Slot symbol:     off_2C79330
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

