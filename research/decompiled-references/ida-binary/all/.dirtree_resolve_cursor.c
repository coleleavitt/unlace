// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1165F0
// Name:            .dirtree_resolve_cursor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1165F0 jmp     cs:dirtree_resolve_cursor_ptr
//
// Resolved target: dirtree_resolve_cursor
// Target address:  0x8D6788
// GOT/IAT slot:    0x8A1F98
// Slot symbol:     dirtree_resolve_cursor_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_resolve_cursor(/* see target signature */)
{
    // Tail-call to dirtree_resolve_cursor via GOT/IAT indirection
    return dirtree_resolve_cursor(/* forwarded args */);
}

