// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115250
// Name:            .udt_type_data_t__get_best_fit_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115250 jmp     cs:udt_type_data_t__get_best_fit_member_ptr
//
// Resolved target: udt_type_data_t__get_best_fit_member
// Target address:  0x8D5B68
// GOT/IAT slot:    0x8A15C8
// Slot symbol:     udt_type_data_t__get_best_fit_member_ptr
// Target type:     <no type info>
// ============================================================

void .udt_type_data_t__get_best_fit_member(/* see target signature */)
{
    // Tail-call to udt_type_data_t__get_best_fit_member via GOT/IAT indirection
    return udt_type_data_t__get_best_fit_member(/* forwarded args */);
}

