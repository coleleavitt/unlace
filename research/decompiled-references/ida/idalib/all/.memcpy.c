// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAB30
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAB30 jmp     cs:off_2C7AD80
//
// Resolved target: memcpy
// Target address:  0x2D11A00
// GOT/IAT slot:    0x2C7AD80
// Slot symbol:     off_2C7AD80
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

