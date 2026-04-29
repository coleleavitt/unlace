// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10140
// Name:            .insn_get_next_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10140 jmp     cs:off_2E088
//
// Resolved target: insn_get_next_byte
// Target address:  0x36D00
// GOT/IAT slot:    0x2E088
// Slot symbol:     off_2E088
// Target type:     <no type info>
// ============================================================

void .insn_get_next_byte(/* see target signature */)
{
    // Tail-call to insn_get_next_byte via GOT/IAT indirection
    return insn_get_next_byte(/* forwarded args */);
}

