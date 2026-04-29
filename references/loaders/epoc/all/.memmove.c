// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3410
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3410 jmp     cs:off_131F0
//
// Resolved target: memmove
// Target address:  0x138F0
// GOT/IAT slot:    0x131F0
// Slot symbol:     off_131F0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

