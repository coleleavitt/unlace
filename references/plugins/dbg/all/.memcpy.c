// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32F0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32F0 jmp     cs:off_13160
//
// Resolved target: memcpy
// Target address:  0x134E0
// GOT/IAT slot:    0x13160
// Slot symbol:     off_13160
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

