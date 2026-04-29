// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8C0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8C0 jmp     cs:off_4BF448
//
// Resolved target: memset
// Target address:  0x4C2918
// GOT/IAT slot:    0x4BF448
// Slot symbol:     off_4BF448
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

