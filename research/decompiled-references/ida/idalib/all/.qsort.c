// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC5B0
// Name:            .qsort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC5B0 jmp     cs:off_2C7BAC0
//
// Resolved target: qsort
// Target address:  0x2D11DB0
// GOT/IAT slot:    0x2C7BAC0
// Slot symbol:     off_2C7BAC0
// Target type:     void(void *base, size_t nmemb, size_t size, __compar_fn_t compar)
// ============================================================

/* see target sig */ .qsort(/* see target signature */)
{
    // Tail-call to qsort via GOT/IAT indirection
    return qsort(/* forwarded args */);
}

