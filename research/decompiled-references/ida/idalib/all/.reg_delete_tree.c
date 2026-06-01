// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB100
// Name:            .reg_delete_tree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB100 jmp     cs:off_2C7B068
//
// Resolved target: reg_delete_tree
// Target address:  0x854C50
// GOT/IAT slot:    0x2C7B068
// Slot symbol:     off_2C7B068
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .reg_delete_tree(/* see target signature */)
{
    // Tail-call to reg_delete_tree via GOT/IAT indirection
    return reg_delete_tree(/* forwarded args */);
}

