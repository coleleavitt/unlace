// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6260
// Name:            .insn_get_next_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6260 jmp     cs:off_1D118
//
// Resolved target: insn_get_next_byte
// Target address:  0x1D608
// GOT/IAT slot:    0x1D118
// Slot symbol:     off_1D118
// Target type:     <no type info>
// ============================================================

void .insn_get_next_byte(/* see target signature */)
{
    // Tail-call to insn_get_next_byte via GOT/IAT indirection
    return insn_get_next_byte(/* forwarded args */);
}

