// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACDB0
// Name:            .malloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACDB0 jmp     cs:off_2C7BEC0
//
// Resolved target: malloc
// Target address:  0x2D11F00
// GOT/IAT slot:    0x2C7BEC0
// Slot symbol:     off_2C7BEC0
// Target type:     void *(size_t size)
// ============================================================

/* see target sig */ .malloc(/* see target signature */)
{
    // Tail-call to malloc via GOT/IAT indirection
    return malloc(/* forwarded args */);
}

