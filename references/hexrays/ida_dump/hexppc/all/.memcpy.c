// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE90
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE90 jmp     cs:off_4DA730
//
// Resolved target: memcpy
// Target address:  0x4DD128
// GOT/IAT slot:    0x4DA730
// Slot symbol:     off_4DA730
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

