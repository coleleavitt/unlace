// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA40
// Name:            .is_indirect_jump_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA40 jmp     cs:off_4ED508
//
// Resolved target: is_indirect_jump_insn
// Target address:  0x4F1808
// GOT/IAT slot:    0x4ED508
// Slot symbol:     off_4ED508
// Target type:     <no type info>
// ============================================================

void .is_indirect_jump_insn(/* see target signature */)
{
    // Tail-call to is_indirect_jump_insn via GOT/IAT indirection
    return is_indirect_jump_insn(/* forwarded args */);
}

