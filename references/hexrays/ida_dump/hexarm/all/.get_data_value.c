// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D640
// Name:            .get_data_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D640 jmp     cs:off_4E9308
//
// Resolved target: get_data_value
// Target address:  0x4EBCF8
// GOT/IAT slot:    0x4E9308
// Slot symbol:     off_4E9308
// Target type:     <no type info>
// ============================================================

void .get_data_value(/* see target signature */)
{
    // Tail-call to get_data_value via GOT/IAT indirection
    return get_data_value(/* forwarded args */);
}

