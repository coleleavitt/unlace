// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8F40
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8F40 jmp     cs:off_2C79F88
//
// Resolved target: get_dword
// Target address:  0x3BEF50
// GOT/IAT slot:    0x2C79F88
// Slot symbol:     off_2C79F88
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

