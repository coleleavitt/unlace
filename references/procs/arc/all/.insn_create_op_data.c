// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8770
// Name:            .insn_create_op_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8770 jmp     cs:off_2A3A0
//
// Resolved target: insn_create_op_data
// Target address:  0x2BDC0
// GOT/IAT slot:    0x2A3A0
// Slot symbol:     off_2A3A0
// Target type:     <no type info>
// ============================================================

void .insn_create_op_data(/* see target signature */)
{
    // Tail-call to insn_create_op_data via GOT/IAT indirection
    return insn_create_op_data(/* forwarded args */);
}

