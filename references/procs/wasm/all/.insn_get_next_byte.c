// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9140
// Name:            .insn_get_next_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9140 jmp     cs:off_26088
//
// Resolved target: insn_get_next_byte
// Target address:  0x26398
// GOT/IAT slot:    0x26088
// Slot symbol:     off_26088
// Target type:     <no type info>
// ============================================================

void .insn_get_next_byte(/* see target signature */)
{
    // Tail-call to insn_get_next_byte via GOT/IAT indirection
    return insn_get_next_byte(/* forwarded args */);
}

