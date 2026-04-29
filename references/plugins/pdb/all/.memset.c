// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D2D0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D2D0 jmp     cs:off_B3150
//
// Resolved target: memset
// Target address:  0xB38E0
// GOT/IAT slot:    0xB3150
// Slot symbol:     off_B3150
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

