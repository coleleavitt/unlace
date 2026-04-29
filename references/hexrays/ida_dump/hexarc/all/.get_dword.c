// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A820
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A820 jmp     cs:off_4B9BF8
//
// Resolved target: get_dword
// Target address:  0x4BC608
// GOT/IAT slot:    0x4B9BF8
// Slot symbol:     off_4B9BF8
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

