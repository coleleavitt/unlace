// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19170
// Name:            .calc_reference_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19170 jmp     cs:off_750A0
//
// Resolved target: calc_reference_data
// Target address:  0x758F0
// GOT/IAT slot:    0x750A0
// Slot symbol:     off_750A0
// Target type:     <no type info>
// ============================================================

void .calc_reference_data(/* see target signature */)
{
    // Tail-call to calc_reference_data via GOT/IAT indirection
    return calc_reference_data(/* forwarded args */);
}

