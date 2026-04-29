// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A900
// Name:            .udt_type_data_t__get_best_fit_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A900 jmp     cs:off_4BF468
//
// Resolved target: udt_type_data_t__get_best_fit_member
// Target address:  0x4C2940
// GOT/IAT slot:    0x4BF468
// Slot symbol:     off_4BF468
// Target type:     <no type info>
// ============================================================

void .udt_type_data_t__get_best_fit_member(/* see target signature */)
{
    // Tail-call to udt_type_data_t__get_best_fit_member via GOT/IAT indirection
    return udt_type_data_t__get_best_fit_member(/* forwarded args */);
}

