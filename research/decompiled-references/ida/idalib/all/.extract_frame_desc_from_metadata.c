// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABE30
// Name:            .extract_frame_desc_from_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABE30 jmp     cs:off_2C7B700
//
// Resolved target: extract_frame_desc_from_metadata
// Target address:  0x7EEFD0
// GOT/IAT slot:    0x2C7B700
// Slot symbol:     off_2C7B700
// Target type:     <no type info>
// ============================================================

void .extract_frame_desc_from_metadata(/* see target signature */)
{
    // Tail-call to extract_frame_desc_from_metadata via GOT/IAT indirection
    return extract_frame_desc_from_metadata(/* forwarded args */);
}

