// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9870
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9870 jmp     cs:off_89420
//
// Resolved target: memmove
// Target address:  0x8C740
// GOT/IAT slot:    0x89420
// Slot symbol:     off_89420
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

