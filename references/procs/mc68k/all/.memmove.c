// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65D0
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65D0 jmp     cs:off_1D2D0
//
// Resolved target: memmove
// Target address:  0x1D7D0
// GOT/IAT slot:    0x1D2D0
// Slot symbol:     off_1D2D0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

