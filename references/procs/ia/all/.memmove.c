// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7350
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7350 jmp     cs:off_26190
//
// Resolved target: memmove
// Target address:  0x26458
// GOT/IAT slot:    0x26190
// Slot symbol:     off_26190
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

