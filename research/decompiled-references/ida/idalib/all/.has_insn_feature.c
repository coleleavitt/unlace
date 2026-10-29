// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAED0
// Name:            .has_insn_feature
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAED0 jmp     cs:off_2C7AF50
//
// Resolved target: has_insn_feature
// Target address:  0x577F10
// GOT/IAT slot:    0x2C7AF50
// Slot symbol:     off_2C7AF50
// Target type:     <no type info>
// ============================================================

void .has_insn_feature(/* see target signature */)
{
    // Tail-call to has_insn_feature via GOT/IAT indirection
    return has_insn_feature(/* forwarded args */);
}

