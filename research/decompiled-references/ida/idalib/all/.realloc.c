// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7460
// Name:            .realloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7460 jmp     cs:off_2C79218
//
// Resolved target: realloc
// Target address:  0x2D113A8
// GOT/IAT slot:    0x2C79218
// Slot symbol:     off_2C79218
// Target type:     void *(void *ptr, size_t size)
// ============================================================

/* see target sig */ .realloc(/* see target signature */)
{
    // Tail-call to realloc via GOT/IAT indirection
    return realloc(/* forwarded args */);
}

