// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6620
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6620 jmp     cs:off_8D2F8
//
// Resolved target: memmove
// Target address:  0x8D8B0
// GOT/IAT slot:    0x8D2F8
// Slot symbol:     off_8D2F8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

