// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA7D0
// Name:            .reg_data_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA7D0 jmp     cs:off_2C7ABD0
//
// Resolved target: reg_data_type
// Target address:  0x854A10
// GOT/IAT slot:    0x2C7ABD0
// Slot symbol:     off_2C7ABD0
// Target type:     <no type info>
// ============================================================

void .reg_data_type(/* see target signature */)
{
    // Tail-call to reg_data_type via GOT/IAT indirection
    return reg_data_type(/* forwarded args */);
}

