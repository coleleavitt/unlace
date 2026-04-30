// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117B70
// Name:            .find_reg_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117B70 jmp     cs:find_reg_value_ptr
//
// Resolved target: find_reg_value
// Target address:  0x8D7520
// GOT/IAT slot:    0x8A2A58
// Slot symbol:     find_reg_value_ptr
// Target type:     <no type info>
// ============================================================

void .find_reg_value(/* see target signature */)
{
    // Tail-call to find_reg_value via GOT/IAT indirection
    return find_reg_value(/* forwarded args */);
}

