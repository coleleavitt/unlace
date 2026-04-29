// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2240
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2240 jmp     cs:off_15108
//
// Resolved target: memmove
// Target address:  0x15300
// GOT/IAT slot:    0x15108
// Slot symbol:     off_15108
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

