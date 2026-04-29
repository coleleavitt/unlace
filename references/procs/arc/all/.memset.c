// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8270
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8270 jmp     cs:off_2A120
//
// Resolved target: memset
// Target address:  0x2BB30
// GOT/IAT slot:    0x2A120
// Slot symbol:     off_2A120
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

