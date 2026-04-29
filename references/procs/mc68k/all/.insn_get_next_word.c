// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6550
// Name:            .insn_get_next_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6550 jmp     cs:off_1D290
//
// Resolved target: insn_get_next_word
// Target address:  0x1D790
// GOT/IAT slot:    0x1D290
// Slot symbol:     off_1D290
// Target type:     <no type info>
// ============================================================

void .insn_get_next_word(/* see target signature */)
{
    // Tail-call to insn_get_next_word via GOT/IAT indirection
    return insn_get_next_word(/* forwarded args */);
}

