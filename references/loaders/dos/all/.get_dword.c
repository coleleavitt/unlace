// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2480
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2480 jmp     cs:off_B228
//
// Resolved target: get_dword
// Target address:  0xB6C8
// GOT/IAT slot:    0xB228
// Slot symbol:     off_B228
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

