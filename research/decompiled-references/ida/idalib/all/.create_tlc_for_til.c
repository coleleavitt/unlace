// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9390
// Name:            .create_tlc_for_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9390 jmp     cs:off_2C7A1B0
//
// Resolved target: create_tlc_for_til
// Target address:  0x55C0E0
// GOT/IAT slot:    0x2C7A1B0
// Slot symbol:     off_2C7A1B0
// Target type:     <no type info>
// ============================================================

void .create_tlc_for_til(/* see target signature */)
{
    // Tail-call to create_tlc_for_til via GOT/IAT indirection
    return create_tlc_for_til(/* forwarded args */);
}

