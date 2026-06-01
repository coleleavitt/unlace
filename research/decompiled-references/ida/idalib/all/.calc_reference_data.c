// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8EA0
// Name:            .calc_reference_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8EA0 jmp     cs:off_2C79F38
//
// Resolved target: calc_reference_data
// Target address:  0x4E3840
// GOT/IAT slot:    0x2C79F38
// Slot symbol:     off_2C79F38
// Target type:     <no type info>
// ============================================================

void .calc_reference_data(/* see target signature */)
{
    // Tail-call to calc_reference_data via GOT/IAT indirection
    return calc_reference_data(/* forwarded args */);
}

