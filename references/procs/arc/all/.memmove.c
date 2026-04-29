// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x87A0
// Name:            .memmove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x87A0 jmp     cs:off_2A3B8
//
// Resolved target: memmove
// Target address:  0x2BDD8
// GOT/IAT slot:    0x2A3B8
// Slot symbol:     off_2A3B8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

