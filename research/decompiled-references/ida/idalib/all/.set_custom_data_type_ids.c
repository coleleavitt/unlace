// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA5F0
// Name:            .set_custom_data_type_ids
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA5F0 jmp     cs:off_2C7AAE0
//
// Resolved target: set_custom_data_type_ids
// Target address:  0x3E9940
// GOT/IAT slot:    0x2C7AAE0
// Slot symbol:     off_2C7AAE0
// Target type:     <no type info>
// ============================================================

void .set_custom_data_type_ids(/* see target signature */)
{
    // Tail-call to set_custom_data_type_ids via GOT/IAT indirection
    return set_custom_data_type_ids(/* forwarded args */);
}

