// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8220
// Name:            .has_insn_feature
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8220 jmp     cs:off_2A0F8
//
// Resolved target: has_insn_feature
// Target address:  0x2A668
// GOT/IAT slot:    0x2A0F8
// Slot symbol:     off_2A0F8
// Target type:     <no type info>
// ============================================================

void .has_insn_feature(/* see target signature */)
{
    // Tail-call to has_insn_feature via GOT/IAT indirection
    return has_insn_feature(/* forwarded args */);
}

