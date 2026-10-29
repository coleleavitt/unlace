// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD100
// Name:            .rand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD100 jmp     cs:off_2C7C068
//
// Resolved target: rand
// Target address:  0x2D11F40
// GOT/IAT slot:    0x2C7C068
// Slot symbol:     off_2C7C068
// Target type:     int(void)
// ============================================================

/* see target sig */ .rand(/* see target signature */)
{
    // Tail-call to rand via GOT/IAT indirection
    return rand(/* forwarded args */);
}

