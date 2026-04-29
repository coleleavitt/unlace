// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3230
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3230 jmp     cs:off_28100
//
// Resolved target: memset
// Target address:  0x285B0
// GOT/IAT slot:    0x28100
// Slot symbol:     off_28100
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

