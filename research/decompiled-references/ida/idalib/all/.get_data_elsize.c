// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC2B0
// Name:            .get_data_elsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC2B0 jmp     cs:off_2C7B940
//
// Resolved target: get_data_elsize
// Target address:  0x3C99D0
// GOT/IAT slot:    0x2C7B940
// Slot symbol:     off_2C7B940
// Target type:     <no type info>
// ============================================================

void .get_data_elsize(/* see target signature */)
{
    // Tail-call to get_data_elsize via GOT/IAT indirection
    return get_data_elsize(/* forwarded args */);
}

