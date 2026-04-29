// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46D0
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46D0 jmp     cs:off_28350
//
// Resolved target: memmove
// Target address:  0x29CF8
// GOT/IAT slot:    0x28350
// Slot symbol:     off_28350
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

