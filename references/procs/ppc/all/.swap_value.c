// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20520
// Name:            .swap_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20520 jmp     cs:off_95278
//
// Resolved target: swap_value
// Target address:  0x95CB0
// GOT/IAT slot:    0x95278
// Slot symbol:     off_95278
// Target type:     <no type info>
// ============================================================

void .swap_value(/* see target signature */)
{
    // Tail-call to swap_value via GOT/IAT indirection
    return swap_value(/* forwarded args */);
}

