// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AFE0
// Name:            .get_struct_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AFE0 jmp     cs:get_struct_operand_ptr
//
// Resolved target: get_struct_operand
// Target address:  0x8D9618
// GOT/IAT slot:    0x8A4490
// Slot symbol:     get_struct_operand_ptr
// Target type:     <no type info>
// ============================================================

void .get_struct_operand(/* see target signature */)
{
    // Tail-call to get_struct_operand via GOT/IAT indirection
    return get_struct_operand(/* forwarded args */);
}

