// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C920
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C920 jmp     cs:off_4EDC78
//
// Resolved target: get_dword
// Target address:  0x4F1FB0
// GOT/IAT slot:    0x4EDC78
// Slot symbol:     off_4EDC78
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

