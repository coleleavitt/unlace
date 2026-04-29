// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9210
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9210 jmp     cs:off_260F0
//
// Resolved target: memcpy
// Target address:  0x26400
// GOT/IAT slot:    0x260F0
// Slot symbol:     off_260F0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

