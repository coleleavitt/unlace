// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8B30
// Name:            .insn_add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8B30 jmp     cs:off_2C79D80
//
// Resolved target: insn_add_dref
// Target address:  0x3E47B0
// GOT/IAT slot:    0x2C79D80
// Slot symbol:     off_2C79D80
// Target type:     <no type info>
// ============================================================

void .insn_add_dref(/* see target signature */)
{
    // Tail-call to insn_add_dref via GOT/IAT indirection
    return insn_add_dref(/* forwarded args */);
}

