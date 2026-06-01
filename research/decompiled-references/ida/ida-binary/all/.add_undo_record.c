// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119200
// Name:            .add_undo_record
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119200 jmp     cs:add_undo_record_ptr
//
// Resolved target: add_undo_record
// Target address:  0x8D8308
// GOT/IAT slot:    0x8A35A0
// Slot symbol:     add_undo_record_ptr
// Target type:     <no type info>
// ============================================================

void .add_undo_record(/* see target signature */)
{
    // Tail-call to add_undo_record via GOT/IAT indirection
    return add_undo_record(/* forwarded args */);
}

