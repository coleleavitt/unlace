// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1195F0
// Name:            .dirtree_new_shadow_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1195F0 jmp     cs:dirtree_new_shadow_dirtree_ptr
//
// Resolved target: dirtree_new_shadow_dirtree
// Target address:  0x8D85C0
// GOT/IAT slot:    0x8A3798
// Slot symbol:     dirtree_new_shadow_dirtree_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_new_shadow_dirtree(/* see target signature */)
{
    // Tail-call to dirtree_new_shadow_dirtree via GOT/IAT indirection
    return dirtree_new_shadow_dirtree(/* forwarded args */);
}

