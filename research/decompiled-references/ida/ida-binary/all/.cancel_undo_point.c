// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1144D0
// Name:            .cancel_undo_point
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1144D0 jmp     cs:cancel_undo_point_ptr
//
// Resolved target: cancel_undo_point
// Target address:  0x8D5260
// GOT/IAT slot:    0x8A0F08
// Slot symbol:     cancel_undo_point_ptr
// Target type:     <no type info>
// ============================================================

void .cancel_undo_point(/* see target signature */)
{
    // Tail-call to cancel_undo_point via GOT/IAT indirection
    return cancel_undo_point(/* forwarded args */);
}

