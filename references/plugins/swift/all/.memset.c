// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4280
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4280 jmp     cs:off_28128
//
// Resolved target: memset
// Target address:  0x29AC0
// GOT/IAT slot:    0x28128
// Slot symbol:     off_28128
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

