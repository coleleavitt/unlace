// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21A0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21A0 jmp     cs:off_80B8
//
// Resolved target: memcpy
// Target address:  0x82A8
// GOT/IAT slot:    0x80B8
// Slot symbol:     off_80B8
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

