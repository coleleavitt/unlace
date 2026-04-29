// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C300
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C300 jmp     cs:off_4ED968
//
// Resolved target: create_data
// Target address:  0x4F1C88
// GOT/IAT slot:    0x4ED968
// Slot symbol:     off_4ED968
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

