// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6F0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6F0 jmp     cs:off_48378
//
// Resolved target: memcpy
// Target address:  0x48610
// GOT/IAT slot:    0x48378
// Slot symbol:     off_48378
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

