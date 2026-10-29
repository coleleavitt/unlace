// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABA00
// Name:            .get_wide_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABA00 jmp     cs:off_2C7B4E8
//
// Resolved target: get_wide_dword
// Target address:  0x3BF3D0
// GOT/IAT slot:    0x2C7B4E8
// Slot symbol:     off_2C7B4E8
// Target type:     <no type info>
// ============================================================

void .get_wide_dword(/* see target signature */)
{
    // Tail-call to get_wide_dword via GOT/IAT indirection
    return get_wide_dword(/* forwarded args */);
}

