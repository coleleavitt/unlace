// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BB20
// Name:            .dirtree_make_cursor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BB20 jmp     cs:dirtree_make_cursor_ptr
//
// Resolved target: dirtree_make_cursor
// Target address:  0x8D9D18
// GOT/IAT slot:    0x8A4A30
// Slot symbol:     dirtree_make_cursor_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_make_cursor(/* see target signature */)
{
    // Tail-call to dirtree_make_cursor via GOT/IAT indirection
    return dirtree_make_cursor(/* forwarded args */);
}

