// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8630
// Name:            .insn_get_next_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8630 jmp     cs:off_2A300
//
// Resolved target: insn_get_next_word
// Target address:  0x2A880
// GOT/IAT slot:    0x2A300
// Slot symbol:     off_2A300
// Target type:     <no type info>
// ============================================================

void .insn_get_next_word(/* see target signature */)
{
    // Tail-call to insn_get_next_word via GOT/IAT indirection
    return insn_get_next_word(/* forwarded args */);
}

