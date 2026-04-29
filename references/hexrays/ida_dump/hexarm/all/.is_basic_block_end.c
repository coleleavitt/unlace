// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DCA0
// Name:            .is_basic_block_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DCA0 jmp     cs:off_4E9638
//
// Resolved target: is_basic_block_end
// Target address:  0x4EC050
// GOT/IAT slot:    0x4E9638
// Slot symbol:     off_4E9638
// Target type:     <no type info>
// ============================================================

void .is_basic_block_end(/* see target signature */)
{
    // Tail-call to is_basic_block_end via GOT/IAT indirection
    return is_basic_block_end(/* forwarded args */);
}

