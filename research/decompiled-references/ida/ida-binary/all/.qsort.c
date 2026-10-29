// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119960
// Name:            .qsort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119960 jmp     cs:qsort_ptr
//
// Resolved target: qsort
// Target address:  0x8D87E8
// GOT/IAT slot:    0x8A3950
// Slot symbol:     qsort_ptr
// Target type:     void(void *base, size_t nmemb, size_t size, __compar_fn_t compar)
// ============================================================

/* see target sig */ .qsort(/* see target signature */)
{
    // Tail-call to qsort via GOT/IAT indirection
    return qsort(/* forwarded args */);
}

