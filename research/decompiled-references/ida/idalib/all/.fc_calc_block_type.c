// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABCA0
// Name:            .fc_calc_block_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABCA0 jmp     cs:off_2C7B638
//
// Resolved target: fc_calc_block_type
// Target address:  0x5DBDC0
// GOT/IAT slot:    0x2C7B638
// Slot symbol:     off_2C7B638
// Target type:     <no type info>
// ============================================================

void .fc_calc_block_type(/* see target signature */)
{
    // Tail-call to fc_calc_block_type via GOT/IAT indirection
    return fc_calc_block_type(/* forwarded args */);
}

