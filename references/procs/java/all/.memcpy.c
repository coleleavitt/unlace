// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63A0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63A0 jmp     cs:off_2D1B8
//
// Resolved target: memcpy
// Target address:  0x2D6B8
// GOT/IAT slot:    0x2D1B8
// Slot symbol:     off_2D1B8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

