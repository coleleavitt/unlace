// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9590
// Name:            .tiplace_t__compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9590 jmp     cs:off_2C7A2B0
//
// Resolved target: tiplace_t__compare2
// Target address:  0x55A5D0
// GOT/IAT slot:    0x2C7A2B0
// Slot symbol:     off_2C7A2B0
// Target type:     <no type info>
// ============================================================

void .tiplace_t__compare2(/* see target signature */)
{
    // Tail-call to tiplace_t__compare2 via GOT/IAT indirection
    return tiplace_t__compare2(/* forwarded args */);
}

