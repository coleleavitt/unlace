// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA940
// Name:            .create_32bit_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA940 jmp     cs:off_2C7AC88
//
// Resolved target: create_32bit_data
// Target address:  0x3D5580
// GOT/IAT slot:    0x2C7AC88
// Slot symbol:     off_2C7AC88
// Target type:     <no type info>
// ============================================================

void .create_32bit_data(/* see target signature */)
{
    // Tail-call to create_32bit_data via GOT/IAT indirection
    return create_32bit_data(/* forwarded args */);
}

