// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2260
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2260 jmp     cs:off_7118
//
// Resolved target: get_dword
// Target address:  0x72D0
// GOT/IAT slot:    0x7118
// Slot symbol:     off_7118
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

