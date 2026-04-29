// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D8E0
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D8E0 jmp     cs:off_B3458
//
// Resolved target: get_dword
// Target address:  0xB3C00
// GOT/IAT slot:    0xB3458
// Slot symbol:     off_B3458
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

