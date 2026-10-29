// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD9F0
// Name:            .srand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD9F0 jmp     cs:off_2C7C4E0
//
// Resolved target: srand
// Target address:  0x2D12078
// GOT/IAT slot:    0x2C7C4E0
// Slot symbol:     off_2C7C4E0
// Target type:     void(unsigned int seed)
// ============================================================

/* see target sig */ .srand(/* see target signature */)
{
    // Tail-call to srand via GOT/IAT indirection
    return srand(/* forwarded args */);
}

