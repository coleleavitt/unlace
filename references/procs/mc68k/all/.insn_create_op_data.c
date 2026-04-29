// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65A0
// Name:            .insn_create_op_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65A0 jmp     cs:off_1D2B8
//
// Resolved target: insn_create_op_data
// Target address:  0x1D7B8
// GOT/IAT slot:    0x1D2B8
// Slot symbol:     off_1D2B8
// Target type:     <no type info>
// ============================================================

void .insn_create_op_data(/* see target signature */)
{
    // Tail-call to insn_create_op_data via GOT/IAT indirection
    return insn_create_op_data(/* forwarded args */);
}

