// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AAD0
// Name:            .rand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AAD0 jmp     cs:rand_ptr
//
// Resolved target: rand
// Target address:  0x8D9308
// GOT/IAT slot:    0x8A4208
// Slot symbol:     rand_ptr
// Target type:     int(void)
// ============================================================

/* see target sig */ .rand(/* see target signature */)
{
    // Tail-call to rand via GOT/IAT indirection
    return rand(/* forwarded args */);
}

