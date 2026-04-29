// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4420
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4420 jmp     cs:off_281F8
//
// Resolved target: memcpy
// Target address:  0x29B90
// GOT/IAT slot:    0x281F8
// Slot symbol:     off_281F8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

