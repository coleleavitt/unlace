// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A87D0
// Name:            .zip_extract_archive_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A87D0 jmp     cs:off_2C79BD0
//
// Resolved target: zip_extract_archive_entry
// Target address:  0x8363A0
// GOT/IAT slot:    0x2C79BD0
// Slot symbol:     off_2C79BD0
// Target type:     <no type info>
// ============================================================

void .zip_extract_archive_entry(/* see target signature */)
{
    // Tail-call to zip_extract_archive_entry via GOT/IAT indirection
    return zip_extract_archive_entry(/* forwarded args */);
}

