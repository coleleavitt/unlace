// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64F0
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64F0 jmp     cs:off_1D260
//
// Resolved target: get_dword
// Target address:  0x1D758
// GOT/IAT slot:    0x1D260
// Slot symbol:     off_1D260
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

