// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44C0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44C0 jmp     cs:off_4E248
//
// Resolved target: memcpy
// Target address:  0x4F858
// GOT/IAT slot:    0x4E248
// Slot symbol:     off_4E248
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

