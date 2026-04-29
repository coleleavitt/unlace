// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A1C0
// Name:            .get_data_elsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A1C0 jmp     cs:off_4B98C8
//
// Resolved target: get_data_elsize
// Target address:  0x4BC2C8
// GOT/IAT slot:    0x4B98C8
// Slot symbol:     off_4B98C8
// Target type:     <no type info>
// ============================================================

void .get_data_elsize(/* see target signature */)
{
    // Tail-call to get_data_elsize via GOT/IAT indirection
    return get_data_elsize(/* forwarded args */);
}

