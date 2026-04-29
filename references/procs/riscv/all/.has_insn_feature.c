// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA270
// Name:            .has_insn_feature
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA270 jmp     cs:off_35120
//
// Resolved target: has_insn_feature
// Target address:  0x35770
// GOT/IAT slot:    0x35120
// Slot symbol:     off_35120
// Target type:     <no type info>
// ============================================================

void .has_insn_feature(/* see target signature */)
{
    // Tail-call to has_insn_feature via GOT/IAT indirection
    return has_insn_feature(/* forwarded args */);
}

