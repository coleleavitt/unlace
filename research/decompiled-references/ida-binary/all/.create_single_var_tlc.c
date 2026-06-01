// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112940
// Name:            .create_single_var_tlc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112940 jmp     cs:create_single_var_tlc_ptr
//
// Resolved target: create_single_var_tlc
// Target address:  0x8D40B8
// GOT/IAT slot:    0x8A0140
// Slot symbol:     create_single_var_tlc_ptr
// Target type:     <no type info>
// ============================================================

void .create_single_var_tlc(/* see target signature */)
{
    // Tail-call to create_single_var_tlc via GOT/IAT indirection
    return create_single_var_tlc(/* forwarded args */);
}

