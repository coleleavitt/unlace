// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6090
// Name:            .insn_add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6090 jmp     cs:off_2D030
//
// Resolved target: insn_add_dref
// Target address:  0x2D530
// GOT/IAT slot:    0x2D030
// Slot symbol:     off_2D030
// Target type:     <no type info>
// ============================================================

void .insn_add_dref(/* see target signature */)
{
    // Tail-call to insn_add_dref via GOT/IAT indirection
    return insn_add_dref(/* forwarded args */);
}

