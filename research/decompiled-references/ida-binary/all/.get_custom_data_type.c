// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B670
// Name:            .get_custom_data_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B670 jmp     cs:get_custom_data_type_ptr
//
// Resolved target: get_custom_data_type
// Target address:  0x8D9A48
// GOT/IAT slot:    0x8A47D8
// Slot symbol:     get_custom_data_type_ptr
// Target type:     <no type info>
// ============================================================

void .get_custom_data_type(/* see target signature */)
{
    // Tail-call to get_custom_data_type via GOT/IAT indirection
    return get_custom_data_type(/* forwarded args */);
}

