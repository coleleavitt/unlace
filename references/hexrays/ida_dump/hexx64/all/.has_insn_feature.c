// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B8C0
// Name:            .has_insn_feature
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B8C0 jmp     cs:off_4ED448
//
// Resolved target: has_insn_feature
// Target address:  0x4F1740
// GOT/IAT slot:    0x4ED448
// Slot symbol:     off_4ED448
// Target type:     <no type info>
// ============================================================

void .has_insn_feature(/* see target signature */)
{
    // Tail-call to has_insn_feature via GOT/IAT indirection
    return has_insn_feature(/* forwarded args */);
}

