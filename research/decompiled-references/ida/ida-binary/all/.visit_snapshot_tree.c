// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1167C0
// Name:            .visit_snapshot_tree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1167C0 jmp     cs:visit_snapshot_tree_ptr
//
// Resolved target: visit_snapshot_tree
// Target address:  0x8D68B8
// GOT/IAT slot:    0x8A2080
// Slot symbol:     visit_snapshot_tree_ptr
// Target type:     <no type info>
// ============================================================

void .visit_snapshot_tree(/* see target signature */)
{
    // Tail-call to visit_snapshot_tree via GOT/IAT indirection
    return visit_snapshot_tree(/* forwarded args */);
}

