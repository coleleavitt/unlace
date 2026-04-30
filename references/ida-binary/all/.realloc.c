// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1116E0
// Name:            .realloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1116E0 jmp     cs:realloc_ptr
//
// Resolved target: realloc
// Target address:  0x8D3500
// GOT/IAT slot:    0x89F810
// Slot symbol:     realloc_ptr
// Target type:     void *(void *ptr, size_t size)
// ============================================================

/* see target sig */ .realloc(/* see target signature */)
{
    // Tail-call to realloc via GOT/IAT indirection
    return realloc(/* forwarded args */);
}

