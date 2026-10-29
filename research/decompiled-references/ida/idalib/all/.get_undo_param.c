// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABE90
// Name:            .get_undo_param
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABE90 jmp     cs:off_2C7B730
//
// Resolved target: get_undo_param
// Target address:  0x57F060
// GOT/IAT slot:    0x2C7B730
// Slot symbol:     off_2C7B730
// Target type:     <no type info>
// ============================================================

void .get_undo_param(/* see target signature */)
{
    // Tail-call to get_undo_param via GOT/IAT indirection
    return get_undo_param(/* forwarded args */);
}

