// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3190
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3190 jmp     cs:off_1A0B0
//
// Resolved target: insn_add_cref
// Target address:  0x1A368
// GOT/IAT slot:    0x1A0B0
// Slot symbol:     off_1A0B0
// Target type:     <no type info>
// ============================================================

void .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

