// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8880
// Name:            .insn_create_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8880 jmp     cs:off_2A428
//
// Resolved target: insn_create_stkvar
// Target address:  0x2BE50
// GOT/IAT slot:    0x2A428
// Slot symbol:     off_2A428
// Target type:     <no type info>
// ============================================================

void .insn_create_stkvar(/* see target signature */)
{
    // Tail-call to insn_create_stkvar via GOT/IAT indirection
    return insn_create_stkvar(/* forwarded args */);
}

