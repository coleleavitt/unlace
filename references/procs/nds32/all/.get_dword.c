// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x85B0
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x85B0 jmp     cs:off_2A2C0
//
// Resolved target: get_dword
// Target address:  0x2A838
// GOT/IAT slot:    0x2A2C0
// Slot symbol:     off_2A2C0
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

