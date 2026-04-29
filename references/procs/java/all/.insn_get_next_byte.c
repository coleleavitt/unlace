// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6280
// Name:            .insn_get_next_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6280 jmp     cs:off_2D128
//
// Resolved target: insn_get_next_byte
// Target address:  0x2D628
// GOT/IAT slot:    0x2D128
// Slot symbol:     off_2D128
// Target type:     <no type info>
// ============================================================

void .insn_get_next_byte(/* see target signature */)
{
    // Tail-call to insn_get_next_byte via GOT/IAT indirection
    return insn_get_next_byte(/* forwarded args */);
}

