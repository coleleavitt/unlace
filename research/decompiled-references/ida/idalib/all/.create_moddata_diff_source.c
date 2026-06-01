// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC610
// Name:            .create_moddata_diff_source
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC610 jmp     cs:off_2C7BAF0
//
// Resolved target: create_moddata_diff_source
// Target address:  0x634570
// GOT/IAT slot:    0x2C7BAF0
// Slot symbol:     off_2C7BAF0
// Target type:     <no type info>
// ============================================================

void .create_moddata_diff_source(/* see target signature */)
{
    // Tail-call to create_moddata_diff_source via GOT/IAT indirection
    return create_moddata_diff_source(/* forwarded args */);
}

