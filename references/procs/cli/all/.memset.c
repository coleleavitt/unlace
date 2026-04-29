// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3110
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3110 jmp     cs:off_1A070
//
// Resolved target: memset
// Target address:  0x1A328
// GOT/IAT slot:    0x1A070
// Slot symbol:     off_1A070
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

