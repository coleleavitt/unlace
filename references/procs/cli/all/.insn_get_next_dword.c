// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3310
// Name:            .insn_get_next_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3310 jmp     cs:off_1A170
//
// Resolved target: insn_get_next_dword
// Target address:  0x1A438
// GOT/IAT slot:    0x1A170
// Slot symbol:     off_1A170
// Target type:     <no type info>
// ============================================================

void .insn_get_next_dword(/* see target signature */)
{
    // Tail-call to insn_get_next_dword via GOT/IAT indirection
    return insn_get_next_dword(/* forwarded args */);
}

