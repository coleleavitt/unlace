// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA9C0
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA9C0 jmp     cs:off_CA4C8
//
// Resolved target: get_dword
// Target address:  0xD0E10
// GOT/IAT slot:    0xCA4C8
// Slot symbol:     off_CA4C8
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

