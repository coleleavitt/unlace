// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3560
// Name:            .enum_type_data_t__set_value_repr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3560 jmp     cs:off_29298
//
// Resolved target: enum_type_data_t__set_value_repr
// Target address:  0x29668
// GOT/IAT slot:    0x29298
// Slot symbol:     off_29298
// Target type:     <no type info>
// ============================================================

void .enum_type_data_t__set_value_repr(/* see target signature */)
{
    // Tail-call to enum_type_data_t__set_value_repr via GOT/IAT indirection
    return enum_type_data_t__set_value_repr(/* forwarded args */);
}

