// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB6D0
// Name:            .get_custom_data_type_ids
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB6D0 jmp     cs:off_2C7B350
//
// Resolved target: get_custom_data_type_ids
// Target address:  0x3E9870
// GOT/IAT slot:    0x2C7B350
// Slot symbol:     off_2C7B350
// Target type:     <no type info>
// ============================================================

void .get_custom_data_type_ids(/* see target signature */)
{
    // Tail-call to get_custom_data_type_ids via GOT/IAT indirection
    return get_custom_data_type_ids(/* forwarded args */);
}

