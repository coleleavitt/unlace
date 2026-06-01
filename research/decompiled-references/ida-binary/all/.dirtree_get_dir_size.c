// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111DC0
// Name:            .dirtree_get_dir_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111DC0 jmp     cs:dirtree_get_dir_size_ptr
//
// Resolved target: dirtree_get_dir_size
// Target address:  0x8D3980
// GOT/IAT slot:    0x89FB80
// Slot symbol:     dirtree_get_dir_size_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_get_dir_size(/* see target signature */)
{
    // Tail-call to dirtree_get_dir_size via GOT/IAT indirection
    return dirtree_get_dir_size(/* forwarded args */);
}

