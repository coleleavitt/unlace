// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113D60
// Name:            .get_undo_action_label
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113D60 jmp     cs:get_undo_action_label_ptr
//
// Resolved target: get_undo_action_label
// Target address:  0x8D4DB8
// GOT/IAT slot:    0x8A0B50
// Slot symbol:     get_undo_action_label_ptr
// Target type:     <no type info>
// ============================================================

void .get_undo_action_label(/* see target signature */)
{
    // Tail-call to get_undo_action_label via GOT/IAT indirection
    return get_undo_action_label(/* forwarded args */);
}

