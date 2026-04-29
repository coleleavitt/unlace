// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B240
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B240 jmp     cs:off_4DA908
//
// Resolved target: create_data
// Target address:  0x4DD308
// GOT/IAT slot:    0x4DA908
// Slot symbol:     off_4DA908
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

