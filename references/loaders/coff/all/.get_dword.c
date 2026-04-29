// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45E0
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45E0 jmp     cs:off_232D8
//
// Resolved target: get_dword
// Target address:  0x23700
// GOT/IAT slot:    0x232D8
// Slot symbol:     off_232D8
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

