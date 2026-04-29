// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D910
// Name:            .udt_type_data_t__get_best_fit_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D910 jmp     cs:off_4E9470
//
// Resolved target: udt_type_data_t__get_best_fit_member
// Target address:  0x4EBE70
// GOT/IAT slot:    0x4E9470
// Slot symbol:     off_4E9470
// Target type:     <no type info>
// ============================================================

void .udt_type_data_t__get_best_fit_member(/* see target signature */)
{
    // Tail-call to udt_type_data_t__get_best_fit_member via GOT/IAT indirection
    return udt_type_data_t__get_best_fit_member(/* forwarded args */);
}

