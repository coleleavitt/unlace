// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A410
// Name:            .calc_reference_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A410 jmp     cs:off_4CD1F0
//
// Resolved target: calc_reference_data
// Target address:  0x4CFBE0
// GOT/IAT slot:    0x4CD1F0
// Slot symbol:     off_4CD1F0
// Target type:     <no type info>
// ============================================================

void .calc_reference_data(/* see target signature */)
{
    // Tail-call to calc_reference_data via GOT/IAT indirection
    return calc_reference_data(/* forwarded args */);
}

