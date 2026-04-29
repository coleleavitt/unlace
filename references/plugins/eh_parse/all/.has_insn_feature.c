// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6270
// Name:            .has_insn_feature
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6270 jmp     cs:off_2F120
//
// Resolved target: has_insn_feature
// Target address:  0x2F790
// GOT/IAT slot:    0x2F120
// Slot symbol:     off_2F120
// Target type:     <no type info>
// ============================================================

void .has_insn_feature(/* see target signature */)
{
    // Tail-call to has_insn_feature via GOT/IAT indirection
    return has_insn_feature(/* forwarded args */);
}

