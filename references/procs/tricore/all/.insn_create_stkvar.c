// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x67E0
// Name:            .insn_create_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x67E0 jmp     cs:off_243D8
//
// Resolved target: insn_create_stkvar
// Target address:  0x261C8
// GOT/IAT slot:    0x243D8
// Slot symbol:     off_243D8
// Target type:     <no type info>
// ============================================================

void .insn_create_stkvar(/* see target signature */)
{
    // Tail-call to insn_create_stkvar via GOT/IAT indirection
    return insn_create_stkvar(/* forwarded args */);
}

