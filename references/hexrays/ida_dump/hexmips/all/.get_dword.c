// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B850
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B850 jmp     cs:off_4CDC10
//
// Resolved target: get_dword
// Target address:  0x4D0640
// GOT/IAT slot:    0x4CDC10
// Slot symbol:     off_4CDC10
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

