// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA900
// Name:            .dirtree_get_parent_cursor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA900 jmp     cs:off_2C7AC68
//
// Resolved target: dirtree_get_parent_cursor
// Target address:  0x77A390
// GOT/IAT slot:    0x2C7AC68
// Slot symbol:     off_2C7AC68
// Target type:     <no type info>
// ============================================================

void .dirtree_get_parent_cursor(/* see target signature */)
{
    // Tail-call to dirtree_get_parent_cursor via GOT/IAT indirection
    return dirtree_get_parent_cursor(/* forwarded args */);
}

