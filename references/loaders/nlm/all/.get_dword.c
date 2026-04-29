// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2250
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2250 jmp     cs:off_8110
//
// Resolved target: get_dword
// Target address:  0x87F8
// GOT/IAT slot:    0x8110
// Slot symbol:     off_8110
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

