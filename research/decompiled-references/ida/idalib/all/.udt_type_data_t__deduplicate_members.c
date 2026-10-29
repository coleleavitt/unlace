// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AABD0
// Name:            .udt_type_data_t__deduplicate_members
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AABD0 jmp     cs:off_2C7ADD0
//
// Resolved target: udt_type_data_t__deduplicate_members
// Target address:  0x5393A0
// GOT/IAT slot:    0x2C7ADD0
// Slot symbol:     off_2C7ADD0
// Target type:     <no type info>
// ============================================================

void .udt_type_data_t__deduplicate_members(/* see target signature */)
{
    // Tail-call to udt_type_data_t__deduplicate_members via GOT/IAT indirection
    return udt_type_data_t__deduplicate_members(/* forwarded args */);
}

