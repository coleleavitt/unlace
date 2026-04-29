// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D420
// Name:            .calc_reference_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D420 jmp     cs:off_4E91F8
//
// Resolved target: calc_reference_data
// Target address:  0x4EBBE8
// GOT/IAT slot:    0x4E91F8
// Slot symbol:     off_4E91F8
// Target type:     <no type info>
// ============================================================

void .calc_reference_data(/* see target signature */)
{
    // Tail-call to calc_reference_data via GOT/IAT indirection
    return calc_reference_data(/* forwarded args */);
}

