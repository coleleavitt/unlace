// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C80
// Name:            .insn_get_next_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C80 jmp     cs:off_95628
//
// Resolved target: insn_get_next_dword
// Target address:  0x96070
// GOT/IAT slot:    0x95628
// Slot symbol:     off_95628
// Target type:     <no type info>
// ============================================================

void .insn_get_next_dword(/* see target signature */)
{
    // Tail-call to insn_get_next_dword via GOT/IAT indirection
    return insn_get_next_dword(/* forwarded args */);
}

