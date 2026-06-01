// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118190
// Name:            .get_custom_data_type_ids
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118190 jmp     cs:get_custom_data_type_ids_ptr
//
// Resolved target: get_custom_data_type_ids
// Target address:  0x8D7918
// GOT/IAT slot:    0x8A2D68
// Slot symbol:     get_custom_data_type_ids_ptr
// Target type:     <no type info>
// ============================================================

void .get_custom_data_type_ids(/* see target signature */)
{
    // Tail-call to get_custom_data_type_ids via GOT/IAT indirection
    return get_custom_data_type_ids(/* forwarded args */);
}

