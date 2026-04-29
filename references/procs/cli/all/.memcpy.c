// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31D0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31D0 jmp     cs:off_1A0D0
//
// Resolved target: memcpy
// Target address:  0x1A388
// GOT/IAT slot:    0x1A0D0
// Slot symbol:     off_1A0D0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

