// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1B0
// Name:            .malloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1B0 jmp     cs:off_480D8
//
// Resolved target: malloc
// Target address:  0x48430
// GOT/IAT slot:    0x480D8
// Slot symbol:     off_480D8
// Target type:     void *(size_t size)
// ============================================================

/* see target sig */ .malloc(/* see target signature */)
{
    // Tail-call to malloc via GOT/IAT indirection
    return malloc(/* forwarded args */);
}

