// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E790
// Name:            .get_struct_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E790 jmp     cs:off_4E9BB0
//
// Resolved target: get_struct_operand
// Target address:  0x4EC5E0
// GOT/IAT slot:    0x4E9BB0
// Slot symbol:     off_4E9BB0
// Target type:     <no type info>
// ============================================================

void .get_struct_operand(/* see target signature */)
{
    // Tail-call to get_struct_operand via GOT/IAT indirection
    return get_struct_operand(/* forwarded args */);
}

