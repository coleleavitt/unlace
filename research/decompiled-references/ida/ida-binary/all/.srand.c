// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BA10
// Name:            .srand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BA10 jmp     cs:srand_ptr
//
// Resolved target: srand
// Target address:  0x8D9C88
// GOT/IAT slot:    0x8A49A8
// Slot symbol:     srand_ptr
// Target type:     void(unsigned int seed)
// ============================================================

/* see target sig */ .srand(/* see target signature */)
{
    // Tail-call to srand via GOT/IAT indirection
    return srand(/* forwarded args */);
}

