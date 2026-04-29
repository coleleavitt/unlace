// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B760
// Name:            .get_struct_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B760 jmp     cs:off_4CDB98
//
// Resolved target: get_struct_operand
// Target address:  0x4D05C8
// GOT/IAT slot:    0x4CDB98
// Slot symbol:     off_4CDB98
// Target type:     <no type info>
// ============================================================

void .get_struct_operand(/* see target signature */)
{
    // Tail-call to get_struct_operand via GOT/IAT indirection
    return get_struct_operand(/* forwarded args */);
}

