// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7E60
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7E60 jmp     cs:off_2C79718
//
// Resolved target: memset
// Target address:  0x2D114C0
// GOT/IAT slot:    0x2C79718
// Slot symbol:     off_2C79718
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

