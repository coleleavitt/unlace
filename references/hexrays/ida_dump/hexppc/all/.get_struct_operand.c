// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B750
// Name:            .get_struct_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B750 jmp     cs:off_4DAB90
//
// Resolved target: get_struct_operand
// Target address:  0x4DD5A0
// GOT/IAT slot:    0x4DAB90
// Slot symbol:     off_4DAB90
// Target type:     <no type info>
// ============================================================

void .get_struct_operand(/* see target signature */)
{
    // Tail-call to get_struct_operand via GOT/IAT indirection
    return get_struct_operand(/* forwarded args */);
}

