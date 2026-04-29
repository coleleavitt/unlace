// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6480
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6480 jmp     cs:off_2D228
//
// Resolved target: create_data
// Target address:  0x2D728
// GOT/IAT slot:    0x2D228
// Slot symbol:     off_2D228
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

