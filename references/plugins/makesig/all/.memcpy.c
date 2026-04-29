// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32D0
// Name:            .memcpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32D0 jmp     cs:off_20150
//
// Resolved target: memcpy
// Target address:  0x21A60
// GOT/IAT slot:    0x20150
// Slot symbol:     off_20150
// Target type:     void *(void *dest, const void *src, size_t n)
// ============================================================

/* see target sig */ .memcpy(/* see target signature */)
{
    // Tail-call to memcpy via GOT/IAT indirection
    return memcpy(/* forwarded args */);
}

