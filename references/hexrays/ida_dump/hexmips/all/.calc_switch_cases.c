// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A120
// Name:            .calc_switch_cases
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A120 jmp     cs:off_4CD078
//
// Resolved target: calc_switch_cases
// Target address:  0x4CFA68
// GOT/IAT slot:    0x4CD078
// Slot symbol:     off_4CD078
// Target type:     <no type info>
// ============================================================

void .calc_switch_cases(/* see target signature */)
{
    // Tail-call to calc_switch_cases via GOT/IAT indirection
    return calc_switch_cases(/* forwarded args */);
}

