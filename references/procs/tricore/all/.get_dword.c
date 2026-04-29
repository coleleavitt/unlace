// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6620
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6620 jmp     cs:off_242F8
//
// Resolved target: get_dword
// Target address:  0x260D0
// GOT/IAT slot:    0x242F8
// Slot symbol:     off_242F8
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

