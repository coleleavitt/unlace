// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA150
// Name:            .calc_file_crc32
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA150 jmp     cs:off_CA090
//
// Resolved target: calc_file_crc32
// Target address:  0xD09B0
// GOT/IAT slot:    0xCA090
// Slot symbol:     off_CA090
// Target type:     <no type info>
// ============================================================

void .calc_file_crc32(/* see target signature */)
{
    // Tail-call to calc_file_crc32 via GOT/IAT indirection
    return calc_file_crc32(/* forwarded args */);
}

