// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4200
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4200 jmp     cs:off_1F0E8
//
// Resolved target: memcpy
// Target address:  0x1F398
// GOT/IAT slot:    0x1F0E8
// Slot symbol:     off_1F0E8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

