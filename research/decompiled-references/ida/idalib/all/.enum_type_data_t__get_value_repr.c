// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA030
// Name:            .enum_type_data_t__get_value_repr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA030 jmp     cs:off_2C7A800
//
// Resolved target: enum_type_data_t__get_value_repr
// Target address:  0x580F80
// GOT/IAT slot:    0x2C7A800
// Slot symbol:     off_2C7A800
// Target type:     <no type info>
// ============================================================

void .enum_type_data_t__get_value_repr(/* see target signature */)
{
    // Tail-call to enum_type_data_t__get_value_repr via GOT/IAT indirection
    return enum_type_data_t__get_value_repr(/* forwarded args */);
}

