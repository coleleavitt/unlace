// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3550
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3550 jmp     cs:off_20290
//
// Resolved target: memmove
// Target address:  0x21BC0
// GOT/IAT slot:    0x20290
// Slot symbol:     off_20290
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

