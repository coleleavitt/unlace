// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116EE0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116EE0 jmp     cs:memcpy_ptr
//
// Resolved target: memcpy
// Target address:  0x8D6D18
// GOT/IAT slot:    0x8A2410
// Slot symbol:     memcpy_ptr
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

