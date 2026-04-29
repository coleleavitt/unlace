// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBE0
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBE0 jmp     cs:off_4C0DD8
//
// Resolved target: memmove
// Target address:  0x4C3DF0
// GOT/IAT slot:    0x4C0DD8
// Slot symbol:     off_4C0DD8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

