// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D8D0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D8D0 jmp     cs:off_4E9450
//
// Resolved target: memset
// Target address:  0x4EBE48
// GOT/IAT slot:    0x4E9450
// Slot symbol:     off_4E9450
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

