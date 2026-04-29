// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DA00
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DA00 jmp     cs:off_B34E8
//
// Resolved target: memmove
// Target address:  0xB3CA0
// GOT/IAT slot:    0xB34E8
// Slot symbol:     off_B34E8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

