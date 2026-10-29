// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A040
// Name:            .dirtree_is_dir_ordered
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A040 jmp     cs:dirtree_is_dir_ordered_ptr
//
// Resolved target: dirtree_is_dir_ordered
// Target address:  0x8D8C38
// GOT/IAT slot:    0x8A3CC0
// Slot symbol:     dirtree_is_dir_ordered_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_is_dir_ordered(/* see target signature */)
{
    // Tail-call to dirtree_is_dir_ordered via GOT/IAT indirection
    return dirtree_is_dir_ordered(/* forwarded args */);
}

