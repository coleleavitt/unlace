// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70E0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70E0 jmp     cs:off_1D058
//
// Resolved target: memset
// Target address:  0x1D388
// GOT/IAT slot:    0x1D058
// Slot symbol:     off_1D058
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

