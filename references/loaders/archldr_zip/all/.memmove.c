// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2260
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2260 jmp     cs:off_8118
//
// Resolved target: memmove
// Target address:  0x8300
// GOT/IAT slot:    0x8118
// Slot symbol:     off_8118
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

