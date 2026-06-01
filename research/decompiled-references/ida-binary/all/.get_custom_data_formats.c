// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113C40
// Name:            .get_custom_data_formats
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113C40 jmp     cs:get_custom_data_formats_ptr
//
// Resolved target: get_custom_data_formats
// Target address:  0x8D4D18
// GOT/IAT slot:    0x8A0AC0
// Slot symbol:     get_custom_data_formats_ptr
// Target type:     <no type info>
// ============================================================

void .get_custom_data_formats(/* see target signature */)
{
    // Tail-call to get_custom_data_formats via GOT/IAT indirection
    return get_custom_data_formats(/* forwarded args */);
}

