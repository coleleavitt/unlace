// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A88B0
// Name:            .swap_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A88B0 jmp     cs:off_2C79C40
//
// Resolved target: swap_value
// Target address:  0x84C810
// GOT/IAT slot:    0x2C79C40
// Slot symbol:     off_2C79C40
// Target type:     <no type info>
// ============================================================

void .swap_value(/* see target signature */)
{
    // Tail-call to swap_value via GOT/IAT indirection
    return swap_value(/* forwarded args */);
}

