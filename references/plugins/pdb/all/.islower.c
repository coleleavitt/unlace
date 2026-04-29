// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D800
// Name:            .islower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D800 jmp     cs:off_B33E8
//
// Resolved target: islower
// Target address:  0xB3B88
// GOT/IAT slot:    0xB33E8
// Slot symbol:     off_B33E8
// Target type:     int(int)
// ============================================================

/* see target sig */ .islower(/* see target signature */)
{
    // Tail-call to islower via GOT/IAT indirection
    return islower(/* forwarded args */);
}

