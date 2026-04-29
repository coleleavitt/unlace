// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E270
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E270 jmp     cs:off_4E9920
//
// Resolved target: create_data
// Target address:  0x4EC340
// GOT/IAT slot:    0x4E9920
// Slot symbol:     off_4E9920
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

