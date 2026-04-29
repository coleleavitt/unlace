// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150 jmp     cs:off_4090
//
// Resolved target: get_dword
// Target address:  0x41B8
// GOT/IAT slot:    0x4090
// Slot symbol:     off_4090
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

