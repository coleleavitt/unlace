// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA9B0
// Name:            .insn_create_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA9B0 jmp     cs:off_354C0
//
// Resolved target: insn_create_stkvar
// Target address:  0x35B28
// GOT/IAT slot:    0x354C0
// Slot symbol:     off_354C0
// Target type:     <no type info>
// ============================================================

void .insn_create_stkvar(/* see target signature */)
{
    // Tail-call to insn_create_stkvar via GOT/IAT indirection
    return insn_create_stkvar(/* forwarded args */);
}

