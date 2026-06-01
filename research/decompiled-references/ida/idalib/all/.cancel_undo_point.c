// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A92B0
// Name:            .cancel_undo_point
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A92B0 jmp     cs:off_2C7A140
//
// Resolved target: cancel_undo_point
// Target address:  0x57FBB0
// GOT/IAT slot:    0x2C7A140
// Slot symbol:     off_2C7A140
// Target type:     <no type info>
// ============================================================

void .cancel_undo_point(/* see target signature */)
{
    // Tail-call to cancel_undo_point via GOT/IAT indirection
    return cancel_undo_point(/* forwarded args */);
}

