// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1143C0
// Name:            .get_std_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1143C0 jmp     cs:get_std_dirtree_ptr
//
// Resolved target: get_std_dirtree
// Target address:  0x8D51B0
// GOT/IAT slot:    0x8A0E80
// Slot symbol:     get_std_dirtree_ptr
// Target type:     <no type info>
// ============================================================

void .get_std_dirtree(/* see target signature */)
{
    // Tail-call to get_std_dirtree via GOT/IAT indirection
    return get_std_dirtree(/* forwarded args */);
}

