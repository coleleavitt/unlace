// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA440
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA440 jmp     cs:off_48220
//
// Resolved target: memmove
// Target address:  0x48508
// GOT/IAT slot:    0x48220
// Slot symbol:     off_48220
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

