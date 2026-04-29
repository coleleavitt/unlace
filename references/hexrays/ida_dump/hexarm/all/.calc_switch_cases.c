// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D120
// Name:            .calc_switch_cases
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D120 jmp     cs:off_4E9078
//
// Resolved target: calc_switch_cases
// Target address:  0x4EBA68
// GOT/IAT slot:    0x4E9078
// Slot symbol:     off_4E9078
// Target type:     <no type info>
// ============================================================

void .calc_switch_cases(/* see target signature */)
{
    // Tail-call to calc_switch_cases via GOT/IAT indirection
    return calc_switch_cases(/* forwarded args */);
}

