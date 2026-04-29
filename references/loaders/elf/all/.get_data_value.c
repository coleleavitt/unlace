// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9220
// Name:            .get_data_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9220 jmp     cs:off_890F8
//
// Resolved target: get_data_value
// Target address:  0x8C3F8
// GOT/IAT slot:    0x890F8
// Slot symbol:     off_890F8
// Target type:     <no type info>
// ============================================================

void .get_data_value(/* see target signature */)
{
    // Tail-call to get_data_value via GOT/IAT indirection
    return get_data_value(/* forwarded args */);
}

