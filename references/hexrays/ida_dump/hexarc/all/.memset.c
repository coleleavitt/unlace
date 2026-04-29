// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x298C0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x298C0 jmp     cs:off_4B9448
//
// Resolved target: memset
// Target address:  0x4BBE20
// GOT/IAT slot:    0x4B9448
// Slot symbol:     off_4B9448
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

