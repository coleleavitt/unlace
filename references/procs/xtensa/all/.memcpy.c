// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7200
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7200 jmp     cs:off_1D0E8
//
// Resolved target: memcpy
// Target address:  0x1D418
// GOT/IAT slot:    0x1D0E8
// Slot symbol:     off_1D0E8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

