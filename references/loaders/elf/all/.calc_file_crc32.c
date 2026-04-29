// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9140
// Name:            .calc_file_crc32
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9140 jmp     cs:off_89088
//
// Resolved target: calc_file_crc32
// Target address:  0x8C388
// GOT/IAT slot:    0x89088
// Slot symbol:     off_89088
// Target type:     <no type info>
// ============================================================

void .calc_file_crc32(/* see target signature */)
{
    // Tail-call to calc_file_crc32 via GOT/IAT indirection
    return calc_file_crc32(/* forwarded args */);
}

