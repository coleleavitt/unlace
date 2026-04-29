// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x97E0
// Name:            .insn_get_next_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x97E0 jmp     cs:off_2E3D8
//
// Resolved target: insn_get_next_dword
// Target address:  0x2EA58
// GOT/IAT slot:    0x2E3D8
// Slot symbol:     off_2E3D8
// Target type:     <no type info>
// ============================================================

void .insn_get_next_dword(/* see target signature */)
{
    // Tail-call to insn_get_next_dword via GOT/IAT indirection
    return insn_get_next_dword(/* forwarded args */);
}

