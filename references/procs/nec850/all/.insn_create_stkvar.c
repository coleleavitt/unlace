// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9940
// Name:            .insn_create_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9940 jmp     cs:off_2E488
//
// Resolved target: insn_create_stkvar
// Target address:  0x2EB10
// GOT/IAT slot:    0x2E488
// Slot symbol:     off_2E488
// Target type:     <no type info>
// ============================================================

void .insn_create_stkvar(/* see target signature */)
{
    // Tail-call to insn_create_stkvar via GOT/IAT indirection
    return insn_create_stkvar(/* forwarded args */);
}

