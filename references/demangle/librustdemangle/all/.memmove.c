// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1110
// Name:            .memmove
// Size:            11 bytes (2 instructions)
// Disassembly:
//   0x1110 endbr64
//   0x1114 bnd jmp cs:off_6048
//
// Resolved target: memmove
// Target address:  0x6090
// GOT/IAT slot:    0x6048
// Slot symbol:     off_6048
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memmove(/* see target signature */)
{
    // Tail-call to memmove via GOT/IAT indirection
    return memmove(/* forwarded args */);
}

