// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31C0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31C0 jmp     cs:off_130C8
//
// Resolved target: memset
// Target address:  0x13440
// GOT/IAT slot:    0x130C8
// Slot symbol:     off_130C8
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

