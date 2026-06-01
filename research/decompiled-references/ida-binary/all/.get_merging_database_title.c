// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113830
// Name:            .get_merging_database_title
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113830 jmp     cs:get_merging_database_title_ptr
//
// Resolved target: get_merging_database_title
// Target address:  0x8D4A58
// GOT/IAT slot:    0x8A08B8
// Slot symbol:     get_merging_database_title_ptr
// Target type:     <no type info>
// ============================================================

void .get_merging_database_title(/* see target signature */)
{
    // Tail-call to get_merging_database_title via GOT/IAT indirection
    return get_merging_database_title(/* forwarded args */);
}

