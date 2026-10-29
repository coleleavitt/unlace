// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114150
// Name:            .set_undo_param
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114150 jmp     cs:set_undo_param_ptr
//
// Resolved target: set_undo_param
// Target address:  0x8D5028
// GOT/IAT slot:    0x8A0D48
// Slot symbol:     set_undo_param_ptr
// Target type:     <no type info>
// ============================================================

void .set_undo_param(/* see target signature */)
{
    // Tail-call to set_undo_param via GOT/IAT indirection
    return set_undo_param(/* forwarded args */);
}

