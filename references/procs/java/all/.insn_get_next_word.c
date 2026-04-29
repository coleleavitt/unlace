// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6670
// Name:            .insn_get_next_word
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6670 jmp     cs:off_2D320
//
// Resolved target: insn_get_next_word
// Target address:  0x2D830
// GOT/IAT slot:    0x2D320
// Slot symbol:     off_2D320
// Target type:     <no type info>
// ============================================================

void .insn_get_next_word(/* see target signature */)
{
    // Tail-call to insn_get_next_word via GOT/IAT indirection
    return insn_get_next_word(/* forwarded args */);
}

