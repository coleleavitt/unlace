// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x97B0
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x97B0 jmp     cs:off_893C0
//
// Resolved target: get_dword
// Target address:  0x8C6D8
// GOT/IAT slot:    0x893C0
// Slot symbol:     off_893C0
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

