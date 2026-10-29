// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114E60
// Name:            .get_custom_data_types
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114E60 jmp     cs:get_custom_data_types_ptr
//
// Resolved target: get_custom_data_types
// Target address:  0x8D58E0
// GOT/IAT slot:    0x8A13D0
// Slot symbol:     get_custom_data_types_ptr
// Target type:     <no type info>
// ============================================================

void .get_custom_data_types(/* see target signature */)
{
    // Tail-call to get_custom_data_types via GOT/IAT indirection
    return get_custom_data_types(/* forwarded args */);
}

