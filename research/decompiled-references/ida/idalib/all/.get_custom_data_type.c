// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD7D0
// Name:            .get_custom_data_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD7D0 jmp     cs:off_2C7C3D0
//
// Resolved target: get_custom_data_type
// Target address:  0x3E8B90
// GOT/IAT slot:    0x2C7C3D0
// Slot symbol:     off_2C7C3D0
// Target type:     <no type info>
// ============================================================

void .get_custom_data_type(/* see target signature */)
{
    // Tail-call to get_custom_data_type via GOT/IAT indirection
    return get_custom_data_type(/* forwarded args */);
}

