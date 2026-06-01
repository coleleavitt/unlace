// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9F60
// Name:            .get_custom_data_format
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9F60 jmp     cs:off_2C7A798
//
// Resolved target: get_custom_data_format
// Target address:  0x3E8C90
// GOT/IAT slot:    0x2C7A798
// Slot symbol:     off_2C7A798
// Target type:     <no type info>
// ============================================================

void .get_custom_data_format(/* see target signature */)
{
    // Tail-call to get_custom_data_format via GOT/IAT indirection
    return get_custom_data_format(/* forwarded args */);
}

