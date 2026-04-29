// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C820
// Name:            .get_struct_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C820 jmp     cs:off_4EDBF8
//
// Resolved target: get_struct_operand
// Target address:  0x4F1F30
// GOT/IAT slot:    0x4EDBF8
// Slot symbol:     off_4EDBF8
// Target type:     <no type info>
// ============================================================

void .get_struct_operand(/* see target signature */)
{
    // Tail-call to get_struct_operand via GOT/IAT indirection
    return get_struct_operand(/* forwarded args */);
}

