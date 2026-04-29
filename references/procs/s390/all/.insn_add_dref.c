// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10070
// Name:            .insn_add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10070 jmp     cs:off_2E020
//
// Resolved target: insn_add_dref
// Target address:  0x36C98
// GOT/IAT slot:    0x2E020
// Slot symbol:     off_2E020
// Target type:     <no type info>
// ============================================================

void .insn_add_dref(/* see target signature */)
{
    // Tail-call to insn_add_dref via GOT/IAT indirection
    return insn_add_dref(/* forwarded args */);
}

