// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114650
// Name:            .create_tlc_for_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114650 jmp     cs:create_tlc_for_til_ptr
//
// Resolved target: create_tlc_for_til
// Target address:  0x8D5368
// GOT/IAT slot:    0x8A0FC8
// Slot symbol:     create_tlc_for_til_ptr
// Target type:     <no type info>
// ============================================================

void .create_tlc_for_til(/* see target signature */)
{
    // Tail-call to create_tlc_for_til via GOT/IAT indirection
    return create_tlc_for_til(/* forwarded args */);
}

