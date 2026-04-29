// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA380
// Name:            .reg_finder_calc_op_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA380 jmp     cs:off_351A8
//
// Resolved target: reg_finder_calc_op_addr
// Target address:  0x357F8
// GOT/IAT slot:    0x351A8
// Slot symbol:     off_351A8
// Target type:     <no type info>
// ============================================================

void .reg_finder_calc_op_addr(/* see target signature */)
{
    // Tail-call to reg_finder_calc_op_addr via GOT/IAT indirection
    return reg_finder_calc_op_addr(/* forwarded args */);
}

