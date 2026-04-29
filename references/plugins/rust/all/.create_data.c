// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2200
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2200 jmp     cs:off_A0E8
//
// Resolved target: create_data
// Target address:  0xB3B8
// GOT/IAT slot:    0xA0E8
// Slot symbol:     off_A0E8
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

