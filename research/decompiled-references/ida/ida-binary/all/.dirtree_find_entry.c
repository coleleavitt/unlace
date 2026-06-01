// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111540
// Name:            .dirtree_find_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111540 jmp     cs:dirtree_find_entry_ptr
//
// Resolved target: dirtree_find_entry
// Target address:  0x8D33E0
// GOT/IAT slot:    0x89F740
// Slot symbol:     dirtree_find_entry_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_find_entry(/* see target signature */)
{
    // Tail-call to dirtree_find_entry via GOT/IAT indirection
    return dirtree_find_entry(/* forwarded args */);
}

