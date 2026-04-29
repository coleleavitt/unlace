// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B2A0
// Name:            .get_predef_insn_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B2A0 jmp     cs:off_4ED138
//
// Resolved target: get_predef_insn_cmt
// Target address:  0x4F1430
// GOT/IAT slot:    0x4ED138
// Slot symbol:     off_4ED138
// Target type:     <no type info>
// ============================================================

void .get_predef_insn_cmt(/* see target signature */)
{
    // Tail-call to get_predef_insn_cmt via GOT/IAT indirection
    return get_predef_insn_cmt(/* forwarded args */);
}

