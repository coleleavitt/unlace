// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x56B0
// Name:            .insn_create_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x56B0 jmp     cs:off_15340
//
// Resolved target: insn_create_stkvar
// Target address:  0x163E8
// GOT/IAT slot:    0x15340
// Slot symbol:     off_15340
// Target type:     <no type info>
// ============================================================

void .insn_create_stkvar(/* see target signature */)
{
    // Tail-call to insn_create_stkvar via GOT/IAT indirection
    return insn_create_stkvar(/* forwarded args */);
}

