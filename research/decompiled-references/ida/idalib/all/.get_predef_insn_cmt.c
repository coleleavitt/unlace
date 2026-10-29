// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8DA0
// Name:            .get_predef_insn_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8DA0 jmp     cs:off_2C79EB8
//
// Resolved target: get_predef_insn_cmt
// Target address:  0x63CBC0
// GOT/IAT slot:    0x2C79EB8
// Slot symbol:     off_2C79EB8
// Target type:     <no type info>
// ============================================================

void .get_predef_insn_cmt(/* see target signature */)
{
    // Tail-call to get_predef_insn_cmt via GOT/IAT indirection
    return get_predef_insn_cmt(/* forwarded args */);
}

