// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9B80
// Name:            .create_undo_point
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9B80 jmp     cs:off_2C7A5A8
//
// Resolved target: create_undo_point
// Target address:  0x57FB90
// GOT/IAT slot:    0x2C7A5A8
// Slot symbol:     off_2C7A5A8
// Target type:     <no type info>
// ============================================================

void .create_undo_point(/* see target signature */)
{
    // Tail-call to create_undo_point via GOT/IAT indirection
    return create_undo_point(/* forwarded args */);
}

