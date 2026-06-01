// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC460
// Name:            .udt_type_data_t__find_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC460 jmp     cs:off_2C7BA18
//
// Resolved target: udt_type_data_t__find_member
// Target address:  0x554D50
// GOT/IAT slot:    0x2C7BA18
// Slot symbol:     off_2C7BA18
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .udt_type_data_t__find_member(/* see target signature */)
{
    // Tail-call to udt_type_data_t__find_member via GOT/IAT indirection
    return udt_type_data_t__find_member(/* forwarded args */);
}

