// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C0 jmp     cs:off_15048
//
// Resolved target: memset
// Target address:  0x15238
// GOT/IAT slot:    0x15048
// Slot symbol:     off_15048
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

