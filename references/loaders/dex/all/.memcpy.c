// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3340
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3340 jmp     cs:off_28188
//
// Resolved target: memcpy
// Target address:  0x28638
// GOT/IAT slot:    0x28188
// Slot symbol:     off_28188
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

