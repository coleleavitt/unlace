// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DEB0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DEB0 jmp     cs:off_4E9740
//
// Resolved target: memcpy
// Target address:  0x4EC158
// GOT/IAT slot:    0x4E9740
// Slot symbol:     off_4E9740
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

