// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21A0
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21A0 jmp     cs:off_80B8
//
// Resolved target: create_data
// Target address:  0x8298
// GOT/IAT slot:    0x80B8
// Slot symbol:     off_80B8
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

