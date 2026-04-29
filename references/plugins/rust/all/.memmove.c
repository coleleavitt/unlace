// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2310
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2310 jmp     cs:off_A170
//
// Resolved target: memmove
// Target address:  0xB450
// GOT/IAT slot:    0xA170
// Slot symbol:     off_A170
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

