// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B1D0
// Name:            .get_data_elsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B1D0 jmp     cs:off_4DA8D0
//
// Resolved target: get_data_elsize
// Target address:  0x4DD2D0
// GOT/IAT slot:    0x4DA8D0
// Slot symbol:     off_4DA8D0
// Target type:     <no type info>
// ============================================================

void .get_data_elsize(/* see target signature */)
{
    // Tail-call to get_data_elsize via GOT/IAT indirection
    return get_data_elsize(/* forwarded args */);
}

