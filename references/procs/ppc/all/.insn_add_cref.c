// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20670
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20670 jmp     cs:off_95320
//
// Resolved target: insn_add_cref
// Target address:  0x95D58
// GOT/IAT slot:    0x95320
// Slot symbol:     off_95320
// Target type:     <no type info>
// ============================================================

void .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

