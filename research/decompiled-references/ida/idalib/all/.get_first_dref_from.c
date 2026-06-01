// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8450
// Name:            .get_first_dref_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8450 jmp     cs:off_2C79A10
//
// Resolved target: get_first_dref_from
// Target address:  0x40F880
// GOT/IAT slot:    0x2C79A10
// Slot symbol:     off_2C79A10
// Target type:     <no type info>
// ============================================================

void .get_first_dref_from(/* see target signature */)
{
    // Tail-call to get_first_dref_from via GOT/IAT indirection
    return get_first_dref_from(/* forwarded args */);
}

