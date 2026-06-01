// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111D90
// Name:            .dirtree_get_abspath_by_cursor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111D90 jmp     cs:dirtree_get_abspath_by_cursor_ptr
//
// Resolved target: dirtree_get_abspath_by_cursor
// Target address:  0x8D3958
// GOT/IAT slot:    0x89FB68
// Slot symbol:     dirtree_get_abspath_by_cursor_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_get_abspath_by_cursor(/* see target signature */)
{
    // Tail-call to dirtree_get_abspath_by_cursor via GOT/IAT indirection
    return dirtree_get_abspath_by_cursor(/* forwarded args */);
}

