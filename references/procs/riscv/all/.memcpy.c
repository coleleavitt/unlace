// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4C0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4C0 jmp     cs:off_35248
//
// Resolved target: memcpy
// Target address:  0x35898
// GOT/IAT slot:    0x35248
// Slot symbol:     off_35248
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

