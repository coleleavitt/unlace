// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1178B0
// Name:            .reg_delete_tree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1178B0 jmp     cs:reg_delete_tree_ptr
//
// Resolved target: reg_delete_tree
// Target address:  0x8D7370
// GOT/IAT slot:    0x8A28F8
// Slot symbol:     reg_delete_tree_ptr
// Target type:     <no type info>
// ============================================================

void .reg_delete_tree(/* see target signature */)
{
    // Tail-call to reg_delete_tree via GOT/IAT indirection
    return reg_delete_tree(/* forwarded args */);
}

