// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19340
// Name:            .has_insn_feature
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19340 jmp     cs:off_75188
//
// Resolved target: has_insn_feature
// Target address:  0x759D8
// GOT/IAT slot:    0x75188
// Slot symbol:     off_75188
// Target type:     <no type info>
// ============================================================

void .has_insn_feature(/* see target signature */)
{
    // Tail-call to has_insn_feature via GOT/IAT indirection
    return has_insn_feature(/* forwarded args */);
}

