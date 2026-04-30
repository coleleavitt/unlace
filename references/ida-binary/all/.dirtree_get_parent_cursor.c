// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116A60
// Name:            .dirtree_get_parent_cursor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116A60 jmp     cs:dirtree_get_parent_cursor_ptr
//
// Resolved target: dirtree_get_parent_cursor
// Target address:  0x8D6A58
// GOT/IAT slot:    0x8A21D0
// Slot symbol:     dirtree_get_parent_cursor_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_get_parent_cursor(/* see target signature */)
{
    // Tail-call to dirtree_get_parent_cursor via GOT/IAT indirection
    return dirtree_get_parent_cursor(/* forwarded args */);
}

