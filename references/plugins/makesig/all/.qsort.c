// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3650
// Name:            .qsort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3650 jmp     cs:off_20310
//
// Resolved target: qsort
// Target address:  0x21C48
// GOT/IAT slot:    0x20310
// Slot symbol:     off_20310
// Target type:     void(void *base, size_t nmemb, size_t size, __compar_fn_t compar)
// ============================================================

/* see target sig */ .qsort(/* see target signature */)
{
    // Tail-call to qsort via GOT/IAT indirection
    return qsort(/* forwarded args */);
}

