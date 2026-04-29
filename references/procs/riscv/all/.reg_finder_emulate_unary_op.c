// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA850
// Name:            .reg_finder_emulate_unary_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA850 jmp     cs:off_35410
//
// Resolved target: reg_finder_emulate_unary_op
// Target address:  0x35A70
// GOT/IAT slot:    0x35410
// Slot symbol:     off_35410
// Target type:     <no type info>
// ============================================================

void .reg_finder_emulate_unary_op(/* see target signature */)
{
    // Tail-call to reg_finder_emulate_unary_op via GOT/IAT indirection
    return reg_finder_emulate_unary_op(/* forwarded args */);
}

