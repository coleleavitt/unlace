// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B650
// Name:            .get_data_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B650 jmp     cs:off_4ED310
//
// Resolved target: get_data_value
// Target address:  0x4F1608
// GOT/IAT slot:    0x4ED310
// Slot symbol:     off_4ED310
// Target type:     <no type info>
// ============================================================

void .get_data_value(/* see target signature */)
{
    // Tail-call to get_data_value via GOT/IAT indirection
    return get_data_value(/* forwarded args */);
}

