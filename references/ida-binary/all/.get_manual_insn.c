// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119FA0
// Name:            .get_manual_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119FA0 jmp     cs:get_manual_insn_ptr
//
// Resolved target: get_manual_insn
// Target address:  0x8D8BC8
// GOT/IAT slot:    0x8A3C70
// Slot symbol:     get_manual_insn_ptr
// Target type:     <no type info>
// ============================================================

void .get_manual_insn(/* see target signature */)
{
    // Tail-call to get_manual_insn via GOT/IAT indirection
    return get_manual_insn(/* forwarded args */);
}

