// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A730
// Name:            .get_struct_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A730 jmp     cs:off_4B9B80
//
// Resolved target: get_struct_operand
// Target address:  0x4BC590
// GOT/IAT slot:    0x4B9B80
// Slot symbol:     off_4B9B80
// Target type:     <no type info>
// ============================================================

void .get_struct_operand(/* see target signature */)
{
    // Tail-call to get_struct_operand via GOT/IAT indirection
    return get_struct_operand(/* forwarded args */);
}

