// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x96F0
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x96F0 jmp     cs:off_2E360
//
// Resolved target: get_dword
// Target address:  0x2E9D8
// GOT/IAT slot:    0x2E360
// Slot symbol:     off_2E360
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

