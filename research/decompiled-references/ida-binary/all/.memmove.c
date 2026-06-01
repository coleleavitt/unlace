// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111A40
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111A40 jmp     cs:memmove_ptr
//
// Resolved target: memmove
// Target address:  0x8D3738
// GOT/IAT slot:    0x89F9C0
// Slot symbol:     memmove_ptr
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

