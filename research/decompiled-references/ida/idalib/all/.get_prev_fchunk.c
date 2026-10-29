// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD580
// Name:            .get_prev_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD580 jmp     cs:off_2C7C2A8
//
// Resolved target: get_prev_fchunk
// Target address:  0x5C7150
// GOT/IAT slot:    0x2C7C2A8
// Slot symbol:     off_2C7C2A8
// Target type:     <no type info>
// ============================================================

void .get_prev_fchunk(/* see target signature */)
{
    // Tail-call to get_prev_fchunk via GOT/IAT indirection
    return get_prev_fchunk(/* forwarded args */);
}

