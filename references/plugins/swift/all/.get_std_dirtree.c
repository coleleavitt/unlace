// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4530
// Name:            .get_std_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4530 jmp     cs:off_28280
//
// Resolved target: get_std_dirtree
// Target address:  0x29C18
// GOT/IAT slot:    0x28280
// Slot symbol:     off_28280
// Target type:     <no type info>
// ============================================================

void .get_std_dirtree(/* see target signature */)
{
    // Tail-call to get_std_dirtree via GOT/IAT indirection
    return get_std_dirtree(/* forwarded args */);
}

