// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19470
// Name:            .reg_finder_calc_op_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19470 jmp     cs:off_75220
//
// Resolved target: reg_finder_calc_op_addr
// Target address:  0x75A70
// GOT/IAT slot:    0x75220
// Slot symbol:     off_75220
// Target type:     <no type info>
// ============================================================

void .reg_finder_calc_op_addr(/* see target signature */)
{
    // Tail-call to reg_finder_calc_op_addr via GOT/IAT indirection
    return reg_finder_calc_op_addr(/* forwarded args */);
}

