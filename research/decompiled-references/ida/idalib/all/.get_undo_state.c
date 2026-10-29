// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA580
// Name:            .get_undo_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA580 jmp     cs:off_2C7AAA8
//
// Resolved target: get_undo_state
// Target address:  0x580A10
// GOT/IAT slot:    0x2C7AAA8
// Slot symbol:     off_2C7AAA8
// Target type:     <no type info>
// ============================================================

void .get_undo_state(/* see target signature */)
{
    // Tail-call to get_undo_state via GOT/IAT indirection
    return get_undo_state(/* forwarded args */);
}

