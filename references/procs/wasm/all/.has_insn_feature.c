// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90E0
// Name:            .has_insn_feature
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90E0 jmp     cs:off_26058
//
// Resolved target: has_insn_feature
// Target address:  0x26368
// GOT/IAT slot:    0x26058
// Slot symbol:     off_26058
// Target type:     <no type info>
// ============================================================

void .has_insn_feature(/* see target signature */)
{
    // Tail-call to has_insn_feature via GOT/IAT indirection
    return has_insn_feature(/* forwarded args */);
}

