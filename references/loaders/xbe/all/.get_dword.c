// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1190
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1190 jmp     cs:off_50B0
//
// Resolved target: get_dword
// Target address:  0x5210
// GOT/IAT slot:    0x50B0
// Slot symbol:     off_50B0
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

