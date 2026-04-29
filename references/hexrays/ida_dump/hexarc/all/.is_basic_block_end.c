// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29C80
// Name:            .is_basic_block_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29C80 jmp     cs:off_4B9628
//
// Resolved target: is_basic_block_end
// Target address:  0x4BC020
// GOT/IAT slot:    0x4B9628
// Slot symbol:     off_4B9628
// Target type:     <no type info>
// ============================================================

void .is_basic_block_end(/* see target signature */)
{
    // Tail-call to is_basic_block_end via GOT/IAT indirection
    return is_basic_block_end(/* forwarded args */);
}

