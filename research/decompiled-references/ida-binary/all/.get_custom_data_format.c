// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115AB0
// Name:            .get_custom_data_format
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115AB0 jmp     cs:get_custom_data_format_ptr
//
// Resolved target: get_custom_data_format
// Target address:  0x8D6068
// GOT/IAT slot:    0x8A19F8
// Slot symbol:     get_custom_data_format_ptr
// Target type:     <no type info>
// ============================================================

void .get_custom_data_format(/* see target signature */)
{
    // Tail-call to get_custom_data_format via GOT/IAT indirection
    return get_custom_data_format(/* forwarded args */);
}

