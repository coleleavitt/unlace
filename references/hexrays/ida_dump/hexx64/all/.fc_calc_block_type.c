// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D250
// Name:            .fc_calc_block_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D250 jmp     cs:off_4EE110
//
// Resolved target: fc_calc_block_type
// Target address:  0x4F2468
// GOT/IAT slot:    0x4EE110
// Slot symbol:     off_4EE110
// Target type:     <no type info>
// ============================================================

void .fc_calc_block_type(/* see target signature */)
{
    // Tail-call to fc_calc_block_type via GOT/IAT indirection
    return fc_calc_block_type(/* forwarded args */);
}

