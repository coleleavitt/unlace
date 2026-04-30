// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115380
// Name:            .get_nlist_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115380 jmp     cs:get_nlist_idx_ptr
//
// Resolved target: get_nlist_idx
// Target address:  0x8D5C10
// GOT/IAT slot:    0x8A1660
// Slot symbol:     get_nlist_idx_ptr
// Target type:     <no type info>
// ============================================================

void .get_nlist_idx(/* see target signature */)
{
    // Tail-call to get_nlist_idx via GOT/IAT indirection
    return get_nlist_idx(/* forwarded args */);
}

