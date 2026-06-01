// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9910
// Name:            .get_outfile_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9910 jmp     cs:off_2C7A470
//
// Resolved target: get_outfile_encoding_idx
// Target address:  0x5AA7B0
// GOT/IAT slot:    0x2C7A470
// Slot symbol:     off_2C7A470
// Target type:     <no type info>
// ============================================================

void .get_outfile_encoding_idx(/* see target signature */)
{
    // Tail-call to get_outfile_encoding_idx via GOT/IAT indirection
    return get_outfile_encoding_idx(/* forwarded args */);
}

