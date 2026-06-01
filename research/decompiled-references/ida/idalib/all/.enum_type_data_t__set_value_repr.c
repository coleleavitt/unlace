// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD1F0
// Name:            .enum_type_data_t__set_value_repr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD1F0 jmp     cs:off_2C7C0E0
//
// Resolved target: enum_type_data_t__set_value_repr
// Target address:  0x581000
// GOT/IAT slot:    0x2C7C0E0
// Slot symbol:     off_2C7C0E0
// Target type:     <no type info>
// ============================================================

void .enum_type_data_t__set_value_repr(/* see target signature */)
{
    // Tail-call to enum_type_data_t__set_value_repr via GOT/IAT indirection
    return enum_type_data_t__set_value_repr(/* forwarded args */);
}

