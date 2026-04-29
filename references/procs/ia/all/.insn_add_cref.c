// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x71A0
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x71A0 jmp     cs:off_260B8
//
// Resolved target: insn_add_cref
// Target address:  0x26370
// GOT/IAT slot:    0x260B8
// Slot symbol:     off_260B8
// Target type:     <no type info>
// ============================================================

void .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

