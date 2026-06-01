// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1131C0
// Name:            .insn_create_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1131C0 jmp     cs:insn_create_stkvar_ptr
//
// Resolved target: insn_create_stkvar
// Target address:  0x8D4648
// GOT/IAT slot:    0x8A0580
// Slot symbol:     insn_create_stkvar_ptr
// Target type:     <no type info>
// ============================================================

void .insn_create_stkvar(/* see target signature */)
{
    // Tail-call to insn_create_stkvar via GOT/IAT indirection
    return insn_create_stkvar(/* forwarded args */);
}

