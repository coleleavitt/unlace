// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10A0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10A0 jmp     cs:off_5038
//
// Resolved target: memset
// Target address:  0x5178
// GOT/IAT slot:    0x5038
// Slot symbol:     off_5038
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

