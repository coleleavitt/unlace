// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113F50
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113F50 jmp     cs:get_dword_ptr
//
// Resolved target: get_dword
// Target address:  0x8D4F08
// GOT/IAT slot:    0x8A0C48
// Slot symbol:     get_dword_ptr
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

