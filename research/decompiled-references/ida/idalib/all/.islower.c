// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9110
// Name:            .islower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9110 jmp     cs:off_2C7A070
//
// Resolved target: islower
// Target address:  0x2D116F0
// GOT/IAT slot:    0x2C7A070
// Slot symbol:     off_2C7A070
// Target type:     int(int)
// ============================================================

/* see target sig */ .islower(/* see target signature */)
{
    // Tail-call to islower via GOT/IAT indirection
    return islower(/* forwarded args */);
}

