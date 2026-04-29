// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A630
// Name:            .get_data_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A630 jmp     cs:off_4DA300
//
// Resolved target: get_data_value
// Target address:  0x4DCCD0
// GOT/IAT slot:    0x4DA300
// Slot symbol:     off_4DA300
// Target type:     <no type info>
// ============================================================

void .get_data_value(/* see target signature */)
{
    // Tail-call to get_data_value via GOT/IAT indirection
    return get_data_value(/* forwarded args */);
}

