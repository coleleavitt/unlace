// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7900
// Name:            .dirtree_get_abspath_by_cursor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7900 jmp     cs:off_2C79468
//
// Resolved target: dirtree_get_abspath_by_cursor
// Target address:  0x77A180
// GOT/IAT slot:    0x2C79468
// Slot symbol:     off_2C79468
// Target type:     <no type info>
// ============================================================

void .dirtree_get_abspath_by_cursor(/* see target signature */)
{
    // Tail-call to dirtree_get_abspath_by_cursor via GOT/IAT indirection
    return dirtree_get_abspath_by_cursor(/* forwarded args */);
}

