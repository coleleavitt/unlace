// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2140
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2140 jmp     cs:off_B088
//
// Resolved target: memset
// Target address:  0xB330
// GOT/IAT slot:    0xB088
// Slot symbol:     off_B088
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

