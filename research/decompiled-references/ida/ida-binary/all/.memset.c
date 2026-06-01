// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1126B0
// Name:            .memset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1126B0 jmp     cs:memset_ptr
//
// Resolved target: memset
// Target address:  0x8D3F30
// GOT/IAT slot:    0x89FFF8
// Slot symbol:     memset_ptr
// Target type:     void *(void *s, int c, size_t n)
// ============================================================

/* see target sig */ .memset(/* see target signature */)
{
    // Tail-call to memset via GOT/IAT indirection
    return memset(/* forwarded args */);
}

