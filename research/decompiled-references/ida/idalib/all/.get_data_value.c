// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACDD0
// Name:            .get_data_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACDD0 jmp     cs:off_2C7BED0
//
// Resolved target: get_data_value
// Target address:  0x3C9FB0
// GOT/IAT slot:    0x2C7BED0
// Slot symbol:     off_2C7BED0
// Target type:     <no type info>
// ============================================================

void .get_data_value(/* see target signature */)
{
    // Tail-call to get_data_value via GOT/IAT indirection
    return get_data_value(/* forwarded args */);
}

