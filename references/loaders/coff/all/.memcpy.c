// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4370
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4370 jmp     cs:off_231A0
//
// Resolved target: memcpy
// Target address:  0x235C0
// GOT/IAT slot:    0x231A0
// Slot symbol:     off_231A0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

