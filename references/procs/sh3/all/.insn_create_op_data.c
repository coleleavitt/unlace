// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x55C0
// Name:            .insn_create_op_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x55C0 jmp     cs:off_152C8
//
// Resolved target: insn_create_op_data
// Target address:  0x16368
// GOT/IAT slot:    0x152C8
// Slot symbol:     off_152C8
// Target type:     <no type info>
// ============================================================

void .insn_create_op_data(/* see target signature */)
{
    // Tail-call to insn_create_op_data via GOT/IAT indirection
    return insn_create_op_data(/* forwarded args */);
}

