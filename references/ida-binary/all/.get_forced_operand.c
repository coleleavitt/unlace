// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1132D0
// Name:            .get_forced_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1132D0 jmp     cs:get_forced_operand_ptr
//
// Resolved target: get_forced_operand
// Target address:  0x8D4700
// GOT/IAT slot:    0x8A0608
// Slot symbol:     get_forced_operand_ptr
// Target type:     <no type info>
// ============================================================

void .get_forced_operand(/* see target signature */)
{
    // Tail-call to get_forced_operand via GOT/IAT indirection
    return get_forced_operand(/* forwarded args */);
}

