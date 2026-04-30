// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AA80
// Name:            .dirtree_change_rank
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AA80 jmp     cs:dirtree_change_rank_ptr
//
// Resolved target: dirtree_change_rank
// Target address:  0x8D92E0
// GOT/IAT slot:    0x8A41E0
// Slot symbol:     dirtree_change_rank_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_change_rank(/* see target signature */)
{
    // Tail-call to dirtree_change_rank via GOT/IAT indirection
    return dirtree_change_rank(/* forwarded args */);
}

