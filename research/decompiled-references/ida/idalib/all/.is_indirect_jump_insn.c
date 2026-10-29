// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7780
// Name:            .is_indirect_jump_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7780 jmp     cs:off_2C793A8
//
// Resolved target: is_indirect_jump_insn
// Target address:  0x5C7480
// GOT/IAT slot:    0x2C793A8
// Slot symbol:     off_2C793A8
// Target type:     <no type info>
// ============================================================

void .is_indirect_jump_insn(/* see target signature */)
{
    // Tail-call to is_indirect_jump_insn via GOT/IAT indirection
    return is_indirect_jump_insn(/* forwarded args */);
}

