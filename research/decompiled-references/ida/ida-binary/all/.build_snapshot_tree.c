// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115020
// Name:            .build_snapshot_tree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115020 jmp     cs:build_snapshot_tree_ptr
//
// Resolved target: build_snapshot_tree
// Target address:  0x8D59E0
// GOT/IAT slot:    0x8A14B0
// Slot symbol:     build_snapshot_tree_ptr
// Target type:     <no type info>
// ============================================================

void .build_snapshot_tree(/* see target signature */)
{
    // Tail-call to build_snapshot_tree via GOT/IAT indirection
    return build_snapshot_tree(/* forwarded args */);
}

