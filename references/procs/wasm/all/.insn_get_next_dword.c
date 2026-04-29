// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9340
// Name:            .insn_get_next_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9340 jmp     cs:off_26188
//
// Resolved target: insn_get_next_dword
// Target address:  0x264A8
// GOT/IAT slot:    0x26188
// Slot symbol:     off_26188
// Target type:     <no type info>
// ============================================================

void .insn_get_next_dword(/* see target signature */)
{
    // Tail-call to insn_get_next_dword via GOT/IAT indirection
    return insn_get_next_dword(/* forwarded args */);
}

