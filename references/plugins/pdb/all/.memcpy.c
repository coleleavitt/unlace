// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D520
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D520 jmp     cs:off_B3278
//
// Resolved target: memcpy
// Target address:  0xB3A18
// GOT/IAT slot:    0xB3278
// Slot symbol:     off_B3278
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

