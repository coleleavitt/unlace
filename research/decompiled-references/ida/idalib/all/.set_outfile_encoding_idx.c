// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9280
// Name:            .set_outfile_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9280 jmp     cs:off_2C7A128
//
// Resolved target: set_outfile_encoding_idx
// Target address:  0x5AAA40
// GOT/IAT slot:    0x2C7A128
// Slot symbol:     off_2C7A128
// Target type:     <no type info>
// ============================================================

void .set_outfile_encoding_idx(/* see target signature */)
{
    // Tail-call to set_outfile_encoding_idx via GOT/IAT indirection
    return set_outfile_encoding_idx(/* forwarded args */);
}

