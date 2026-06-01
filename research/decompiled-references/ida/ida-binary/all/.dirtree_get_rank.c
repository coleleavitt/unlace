// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116470
// Name:            .dirtree_get_rank
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116470 jmp     cs:dirtree_get_rank_ptr
//
// Resolved target: dirtree_get_rank
// Target address:  0x8D6690
// GOT/IAT slot:    0x8A1ED8
// Slot symbol:     dirtree_get_rank_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_get_rank(/* see target signature */)
{
    // Tail-call to dirtree_get_rank via GOT/IAT indirection
    return dirtree_get_rank(/* forwarded args */);
}

