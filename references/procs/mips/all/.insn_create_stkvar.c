// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19CB0
// Name:            .insn_create_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19CB0 jmp     cs:off_75640
//
// Resolved target: insn_create_stkvar
// Target address:  0x75EA8
// GOT/IAT slot:    0x75640
// Slot symbol:     off_75640
// Target type:     <no type info>
// ============================================================

void .insn_create_stkvar(/* see target signature */)
{
    // Tail-call to insn_create_stkvar via GOT/IAT indirection
    return insn_create_stkvar(/* forwarded args */);
}

