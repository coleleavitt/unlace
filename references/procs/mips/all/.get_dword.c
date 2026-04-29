// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x199D0
// Name:            .get_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x199D0 jmp     cs:off_754D0
//
// Resolved target: get_dword
// Target address:  0x75D28
// GOT/IAT slot:    0x754D0
// Slot symbol:     off_754D0
// Target type:     <no type info>
// ============================================================

void .get_dword(/* see target signature */)
{
    // Tail-call to get_dword via GOT/IAT indirection
    return get_dword(/* forwarded args */);
}

