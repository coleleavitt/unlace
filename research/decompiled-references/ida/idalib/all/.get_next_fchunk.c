// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD9E0
// Name:            .get_next_fchunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD9E0 jmp     cs:off_2C7C4D8
//
// Resolved target: get_next_fchunk
// Target address:  0x5C7180
// GOT/IAT slot:    0x2C7C4D8
// Slot symbol:     off_2C7C4D8
// Target type:     <no type info>
// ============================================================

void .get_next_fchunk(/* see target signature */)
{
    // Tail-call to get_next_fchunk via GOT/IAT indirection
    return get_next_fchunk(/* forwarded args */);
}

