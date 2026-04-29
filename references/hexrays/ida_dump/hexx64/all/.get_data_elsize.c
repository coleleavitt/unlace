// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C280
// Name:            .get_data_elsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C280 jmp     cs:off_4ED928
//
// Resolved target: get_data_elsize
// Target address:  0x4F1C48
// GOT/IAT slot:    0x4ED928
// Slot symbol:     off_4ED928
// Target type:     <no type info>
// ============================================================

void .get_data_elsize(/* see target signature */)
{
    // Tail-call to get_data_elsize via GOT/IAT indirection
    return get_data_elsize(/* forwarded args */);
}

