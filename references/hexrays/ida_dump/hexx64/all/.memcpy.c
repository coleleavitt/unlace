// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEF0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEF0 jmp     cs:off_4ED760
//
// Resolved target: memcpy
// Target address:  0x4F1A70
// GOT/IAT slot:    0x4ED760
// Slot symbol:     off_4ED760
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

