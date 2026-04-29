// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DA20
// Name:            .is_indirect_jump_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DA20 jmp     cs:off_4E94F8
//
// Resolved target: is_indirect_jump_insn
// Target address:  0x4EBF00
// GOT/IAT slot:    0x4E94F8
// Slot symbol:     off_4E94F8
// Target type:     <no type info>
// ============================================================

void .is_indirect_jump_insn(/* see target signature */)
{
    // Tail-call to is_indirect_jump_insn via GOT/IAT indirection
    return is_indirect_jump_insn(/* forwarded args */);
}

