// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92B0
// Name:            .insn_get_next_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92B0 jmp     cs:off_26140
//
// Resolved target: insn_get_next_qword
// Target address:  0x26450
// GOT/IAT slot:    0x26140
// Slot symbol:     off_26140
// Target type:     <no type info>
// ============================================================

void .insn_get_next_qword(/* see target signature */)
{
    // Tail-call to insn_get_next_qword via GOT/IAT indirection
    return insn_get_next_qword(/* forwarded args */);
}

