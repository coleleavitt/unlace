// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC200
// Name:            .add_undo_record
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC200 jmp     cs:off_2C7B8E8
//
// Resolved target: add_undo_record
// Target address:  0x5805E0
// GOT/IAT slot:    0x2C7B8E8
// Slot symbol:     off_2C7B8E8
// Target type:     <no type info>
// ============================================================

void .add_undo_record(/* see target signature */)
{
    // Tail-call to add_undo_record via GOT/IAT indirection
    return add_undo_record(/* forwarded args */);
}

