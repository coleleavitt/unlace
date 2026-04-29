// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x84E0
// Name:            .find_reg_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x84E0 jmp     cs:off_2A258
//
// Resolved target: find_reg_value
// Target address:  0x2A7C8
// GOT/IAT slot:    0x2A258
// Slot symbol:     off_2A258
// Target type:     <no type info>
// ============================================================

void .find_reg_value(/* see target signature */)
{
    // Tail-call to find_reg_value via GOT/IAT indirection
    return find_reg_value(/* forwarded args */);
}

