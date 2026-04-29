// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2130
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2130 jmp     cs:off_8080
//
// Resolved target: memset
// Target address:  0x8240
// GOT/IAT slot:    0x8080
// Slot symbol:     off_8080
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

