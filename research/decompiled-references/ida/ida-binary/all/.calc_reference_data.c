// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113E70
// Name:            .calc_reference_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113E70 jmp     cs:calc_reference_data_ptr
//
// Resolved target: calc_reference_data
// Target address:  0x8D4E88
// GOT/IAT slot:    0x8A0BD8
// Slot symbol:     calc_reference_data_ptr
// Target type:     <no type info>
// ============================================================

void .calc_reference_data(/* see target signature */)
{
    // Tail-call to calc_reference_data via GOT/IAT indirection
    return calc_reference_data(/* forwarded args */);
}

