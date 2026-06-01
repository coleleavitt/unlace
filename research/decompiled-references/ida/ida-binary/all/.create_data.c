// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1143D0
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1143D0 jmp     cs:create_data_ptr
//
// Resolved target: create_data
// Target address:  0x8D51B8
// GOT/IAT slot:    0x8A0E88
// Slot symbol:     create_data_ptr
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

