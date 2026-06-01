// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114470
// Name:            .set_outfile_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114470 jmp     cs:set_outfile_encoding_idx_ptr
//
// Resolved target: set_outfile_encoding_idx
// Target address:  0x8D5210
// GOT/IAT slot:    0x8A0ED8
// Slot symbol:     set_outfile_encoding_idx_ptr
// Target type:     <no type info>
// ============================================================

void .set_outfile_encoding_idx(/* see target signature */)
{
    // Tail-call to set_outfile_encoding_idx via GOT/IAT indirection
    return set_outfile_encoding_idx(/* forwarded args */);
}

