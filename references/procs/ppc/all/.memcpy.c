// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20710
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20710 jmp     cs:off_95370
//
// Resolved target: memcpy
// Target address:  0x95DA8
// GOT/IAT slot:    0x95370
// Slot symbol:     off_95370
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

