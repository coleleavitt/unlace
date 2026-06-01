// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACB40
// Name:            .calloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACB40 jmp     cs:off_2C7BD88
//
// Resolved target: calloc
// Target address:  0x2D11E98
// GOT/IAT slot:    0x2C7BD88
// Slot symbol:     off_2C7BD88
// Target type:     void *(size_t nmemb, size_t size)
// ============================================================

/* see target sig */ .calloc(/* see target signature */)
{
    // Tail-call to calloc via GOT/IAT indirection
    return calloc(/* forwarded args */);
}

