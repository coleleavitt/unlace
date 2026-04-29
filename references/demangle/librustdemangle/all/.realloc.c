// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1100
// Name:            .realloc
// Size:            11 bytes (2 instructions)
// Disassembly:
//   0x1100 endbr64
//   0x1104 bnd jmp cs:off_6040
//
// Resolved target: realloc
// Target address:  0x6088
// GOT/IAT slot:    0x6040
// Slot symbol:     off_6040
// Target type:     void *(void *ptr, size_t size)
// ============================================================

/* see target sig */ .realloc(/* see target signature */)
{
    // Tail-call to realloc via GOT/IAT indirection
    return realloc(/* forwarded args */);
}

