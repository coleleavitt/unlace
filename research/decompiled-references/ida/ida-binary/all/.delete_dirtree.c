// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AC80
// Name:            .delete_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AC80 jmp     cs:delete_dirtree_ptr
//
// Resolved target: delete_dirtree
// Target address:  0x8D9418
// GOT/IAT slot:    0x8A42E0
// Slot symbol:     delete_dirtree_ptr
// Target type:     <no type info>
// ============================================================

void .delete_dirtree(/* see target signature */)
{
    // Tail-call to delete_dirtree via GOT/IAT indirection
    return delete_dirtree(/* forwarded args */);
}

