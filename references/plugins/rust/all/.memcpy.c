// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21B0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21B0 jmp     cs:off_A0C0
//
// Resolved target: memcpy
// Target address:  0xB390
// GOT/IAT slot:    0xA0C0
// Slot symbol:     off_A0C0
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

