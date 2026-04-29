// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3200
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3200 jmp     cs:off_140E8
//
// Resolved target: memset
// Target address:  0x146D0
// GOT/IAT slot:    0x140E8
// Slot symbol:     off_140E8
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

