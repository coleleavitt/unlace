// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A340
// Name:            .calloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A340 jmp     cs:calloc_ptr
//
// Resolved target: calloc
// Target address:  0x8D8DF0
// GOT/IAT slot:    0x8A3E40
// Slot symbol:     calloc_ptr
// Target type:     void *(size_t nmemb, size_t size)
// ============================================================

/* see target sig */ .calloc(/* see target signature */)
{
    // Tail-call to calloc via GOT/IAT indirection
    return calloc(/* forwarded args */);
}

