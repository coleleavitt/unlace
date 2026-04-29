// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29A00
// Name:            .is_indirect_jump_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29A00 jmp     cs:off_4B94E8
//
// Resolved target: is_indirect_jump_insn
// Target address:  0x4BBED0
// GOT/IAT slot:    0x4B94E8
// Slot symbol:     off_4B94E8
// Target type:     <no type info>
// ============================================================

void .is_indirect_jump_insn(/* see target signature */)
{
    // Tail-call to is_indirect_jump_insn via GOT/IAT indirection
    return is_indirect_jump_insn(/* forwarded args */);
}

