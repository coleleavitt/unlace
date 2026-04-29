// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA870
// Name:            .insn_create_op_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA870 jmp     cs:off_35420
//
// Resolved target: insn_create_op_data
// Target address:  0x35A80
// GOT/IAT slot:    0x35420
// Slot symbol:     off_35420
// Target type:     <no type info>
// ============================================================

void .insn_create_op_data(/* see target signature */)
{
    // Tail-call to insn_create_op_data via GOT/IAT indirection
    return insn_create_op_data(/* forwarded args */);
}

