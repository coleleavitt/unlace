// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10180
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10180 jmp     cs:off_2E0A8
//
// Resolved target: insn_add_cref
// Target address:  0x36D20
// GOT/IAT slot:    0x2E0A8
// Slot symbol:     off_2E0A8
// Target type:     <no type info>
// ============================================================

void .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

