// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0A0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0A0 jmp     cs:off_48050
//
// Resolved target: memset
// Target address:  0x483F0
// GOT/IAT slot:    0x48050
// Slot symbol:     off_48050
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

