// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A87E0
// Name:            .is_basic_block_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A87E0 jmp     cs:off_2C79BD8
//
// Resolved target: is_basic_block_end
// Target address:  0x5DCE90
// GOT/IAT slot:    0x2C79BD8
// Slot symbol:     off_2C79BD8
// Target type:     <no type info>
// ============================================================

void .is_basic_block_end(/* see target signature */)
{
    // Tail-call to is_basic_block_end via GOT/IAT indirection
    return is_basic_block_end(/* forwarded args */);
}

