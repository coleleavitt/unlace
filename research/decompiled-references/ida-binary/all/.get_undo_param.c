// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118DF0
// Name:            .get_undo_param
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118DF0 jmp     cs:get_undo_param_ptr
//
// Resolved target: get_undo_param
// Target address:  0x8D8068
// GOT/IAT slot:    0x8A3398
// Slot symbol:     get_undo_param_ptr
// Target type:     <no type info>
// ============================================================

void .get_undo_param(/* see target signature */)
{
    // Tail-call to get_undo_param via GOT/IAT indirection
    return get_undo_param(/* forwarded args */);
}

