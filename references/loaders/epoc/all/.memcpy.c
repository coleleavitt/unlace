// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3260
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3260 jmp     cs:off_13118
//
// Resolved target: memcpy
// Target address:  0x13808
// GOT/IAT slot:    0x13118
// Slot symbol:     off_13118
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

