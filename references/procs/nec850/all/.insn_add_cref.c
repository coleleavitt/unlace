// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93D0
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93D0 jmp     cs:off_2E1D0
//
// Resolved target: insn_add_cref
// Target address:  0x2E840
// GOT/IAT slot:    0x2E1D0
// Slot symbol:     off_2E1D0
// Target type:     <no type info>
// ============================================================

void .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

