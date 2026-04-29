// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4240
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4240 jmp     cs:off_23108
//
// Resolved target: memset
// Target address:  0x23528
// GOT/IAT slot:    0x23108
// Slot symbol:     off_23108
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

