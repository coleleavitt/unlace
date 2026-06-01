// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A90A0
// Name:            .set_undo_param
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A90A0 jmp     cs:off_2C7A038
//
// Resolved target: set_undo_param
// Target address:  0x57F0E0
// GOT/IAT slot:    0x2C7A038
// Slot symbol:     off_2C7A038
// Target type:     <no type info>
// ============================================================

void .set_undo_param(/* see target signature */)
{
    // Tail-call to set_undo_param via GOT/IAT indirection
    return set_undo_param(/* forwarded args */);
}

