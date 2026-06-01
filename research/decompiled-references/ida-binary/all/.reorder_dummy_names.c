// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1174A0
// Name:            .reorder_dummy_names
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1174A0 jmp     cs:reorder_dummy_names_ptr
//
// Resolved target: reorder_dummy_names
// Target address:  0x8D70E8
// GOT/IAT slot:    0x8A26F0
// Slot symbol:     reorder_dummy_names_ptr
// Target type:     <no type info>
// ============================================================

void .reorder_dummy_names(/* see target signature */)
{
    // Tail-call to reorder_dummy_names via GOT/IAT indirection
    return reorder_dummy_names(/* forwarded args */);
}

