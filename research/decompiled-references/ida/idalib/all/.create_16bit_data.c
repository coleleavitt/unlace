// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA530
// Name:            .create_16bit_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA530 jmp     cs:off_2C7AA80
//
// Resolved target: create_16bit_data
// Target address:  0x3D5520
// GOT/IAT slot:    0x2C7AA80
// Slot symbol:     off_2C7AA80
// Target type:     <no type info>
// ============================================================

void .create_16bit_data(/* see target signature */)
{
    // Tail-call to create_16bit_data via GOT/IAT indirection
    return create_16bit_data(/* forwarded args */);
}

