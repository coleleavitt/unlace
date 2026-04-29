// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8390
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8390 jmp     cs:off_2A1B0
//
// Resolved target: memcpy
// Target address:  0x2A720
// GOT/IAT slot:    0x2A1B0
// Slot symbol:     off_2A1B0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

