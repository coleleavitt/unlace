// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA660
// Name:            .dirtree_resolve_cursor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA660 jmp     cs:off_2C7AB18
//
// Resolved target: dirtree_resolve_cursor
// Target address:  0x779EF0
// GOT/IAT slot:    0x2C7AB18
// Slot symbol:     off_2C7AB18
// Target type:     <no type info>
// ============================================================

void .dirtree_resolve_cursor(/* see target signature */)
{
    // Tail-call to dirtree_resolve_cursor via GOT/IAT indirection
    return dirtree_resolve_cursor(/* forwarded args */);
}

