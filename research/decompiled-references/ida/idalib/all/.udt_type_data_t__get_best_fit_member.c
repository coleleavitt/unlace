// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9B40
// Name:            .udt_type_data_t__get_best_fit_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9B40 jmp     cs:off_2C7A588
//
// Resolved target: udt_type_data_t__get_best_fit_member
// Target address:  0x554DB0
// GOT/IAT slot:    0x2C7A588
// Slot symbol:     off_2C7A588
// Target type:     <no type info>
// ============================================================

void .udt_type_data_t__get_best_fit_member(/* see target signature */)
{
    // Tail-call to udt_type_data_t__get_best_fit_member via GOT/IAT indirection
    return udt_type_data_t__get_best_fit_member(/* forwarded args */);
}

