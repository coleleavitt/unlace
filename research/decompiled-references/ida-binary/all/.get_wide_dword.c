// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118730
// Name:            .get_wide_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118730 jmp     cs:get_wide_dword_ptr
//
// Resolved target: get_wide_dword
// Target address:  0x8D7C70
// GOT/IAT slot:    0x8A3038
// Slot symbol:     get_wide_dword_ptr
// Target type:     <no type info>
// ============================================================

void .get_wide_dword(/* see target signature */)
{
    // Tail-call to get_wide_dword via GOT/IAT indirection
    return get_wide_dword(/* forwarded args */);
}

