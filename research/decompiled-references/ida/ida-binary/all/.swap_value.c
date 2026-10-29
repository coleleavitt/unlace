// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1135B0
// Name:            .swap_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1135B0 jmp     cs:swap_value_ptr
//
// Resolved target: swap_value
// Target address:  0x8D48C8
// GOT/IAT slot:    0x8A0778
// Slot symbol:     swap_value_ptr
// Target type:     <no type info>
// ============================================================

void .swap_value(/* see target signature */)
{
    // Tail-call to swap_value via GOT/IAT indirection
    return swap_value(/* forwarded args */);
}

