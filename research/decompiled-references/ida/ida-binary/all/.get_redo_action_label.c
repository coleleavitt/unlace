// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114430
// Name:            .get_redo_action_label
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114430 jmp     cs:get_redo_action_label_ptr
//
// Resolved target: get_redo_action_label
// Target address:  0x8D51F0
// GOT/IAT slot:    0x8A0EB8
// Slot symbol:     get_redo_action_label_ptr
// Target type:     <no type info>
// ============================================================

void .get_redo_action_label(/* see target signature */)
{
    // Tail-call to get_redo_action_label via GOT/IAT indirection
    return get_redo_action_label(/* forwarded args */);
}

