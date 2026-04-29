// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19450
// Name:            .swap_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19450 jmp     cs:off_75210
//
// Resolved target: swap_value
// Target address:  0x75A60
// GOT/IAT slot:    0x75210
// Slot symbol:     off_75210
// Target type:     <no type info>
// ============================================================

void .swap_value(/* see target signature */)
{
    // Tail-call to swap_value via GOT/IAT indirection
    return swap_value(/* forwarded args */);
}

