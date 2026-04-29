// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBD0
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBD0 jmp     cs:off_4BFDD0
//
// Resolved target: memmove
// Target address:  0x4C32E8
// GOT/IAT slot:    0x4BFDD0
// Slot symbol:     off_4BFDD0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

