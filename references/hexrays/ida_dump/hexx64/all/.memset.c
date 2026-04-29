// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B900
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B900 jmp     cs:off_4ED468
//
// Resolved target: memset
// Target address:  0x4F1760
// GOT/IAT slot:    0x4ED468
// Slot symbol:     off_4ED468
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

