// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1152C0
// Name:            .create_undo_point
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1152C0 jmp     cs:create_undo_point_ptr
//
// Resolved target: create_undo_point
// Target address:  0x8D5BA8
// GOT/IAT slot:    0x8A1600
// Slot symbol:     create_undo_point_ptr
// Target type:     <no type info>
// ============================================================

void .create_undo_point(/* see target signature */)
{
    // Tail-call to create_undo_point via GOT/IAT indirection
    return create_undo_point(/* forwarded args */);
}

