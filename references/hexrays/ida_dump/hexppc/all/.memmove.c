// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBD0
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBD0 jmp     cs:off_4DADD0
//
// Resolved target: memmove
// Target address:  0x4DD7F0
// GOT/IAT slot:    0x4DADD0
// Slot symbol:     off_4DADD0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

