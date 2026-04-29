// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5370
// Name:            .insn_get_next_qword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5370 jmp     cs:off_1A1A0
//
// Resolved target: insn_get_next_qword
// Target address:  0x1A528
// GOT/IAT slot:    0x1A1A0
// Slot symbol:     off_1A1A0
// Target type:     <no type info>
// ============================================================

void .insn_get_next_qword(/* see target signature */)
{
    // Tail-call to insn_get_next_qword via GOT/IAT indirection
    return insn_get_next_qword(/* forwarded args */);
}

