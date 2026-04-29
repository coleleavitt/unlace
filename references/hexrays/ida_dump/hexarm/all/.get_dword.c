// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E880
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E880 jmp     cs:off_4E9C28
//
// Resolved target: get_dword
// Target address:  0x4EC658
// GOT/IAT slot:    0x4E9C28
// Slot symbol:     off_4E9C28
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

