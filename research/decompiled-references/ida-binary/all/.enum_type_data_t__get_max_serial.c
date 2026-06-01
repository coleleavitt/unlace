// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115410
// Name:            .enum_type_data_t__get_max_serial
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115410 jmp     cs:enum_type_data_t__get_max_serial_ptr
//
// Resolved target: enum_type_data_t__get_max_serial
// Target address:  0x8D5C60
// GOT/IAT slot:    0x8A16A8
// Slot symbol:     enum_type_data_t__get_max_serial_ptr
// Target type:     <no type info>
// ============================================================

void .enum_type_data_t__get_max_serial(/* see target signature */)
{
    // Tail-call to enum_type_data_t__get_max_serial via GOT/IAT indirection
    return enum_type_data_t__get_max_serial(/* forwarded args */);
}

