// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72D0
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72D0 jmp     cs:off_26150
//
// Resolved target: get_dword
// Target address:  0x26410
// GOT/IAT slot:    0x26150
// Slot symbol:     off_26150
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

