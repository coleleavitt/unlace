// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7680
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7680 jmp     cs:off_19328
//
// Resolved target: memmove
// Target address:  0x19868
// GOT/IAT slot:    0x19328
// Slot symbol:     off_19328
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

