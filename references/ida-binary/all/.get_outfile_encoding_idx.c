// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114D80
// Name:            .get_outfile_encoding_idx
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114D80 jmp     cs:get_outfile_encoding_idx_ptr
//
// Resolved target: get_outfile_encoding_idx
// Target address:  0x8D5858
// GOT/IAT slot:    0x8A1360
// Slot symbol:     get_outfile_encoding_idx_ptr
// Target type:     <no type info>
// ============================================================

void .get_outfile_encoding_idx(/* see target signature */)
{
    // Tail-call to get_outfile_encoding_idx via GOT/IAT indirection
    return get_outfile_encoding_idx(/* forwarded args */);
}

