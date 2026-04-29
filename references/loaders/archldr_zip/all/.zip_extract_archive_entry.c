// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2160
// Name:            .zip_extract_archive_entry
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2160 jmp     cs:off_8098
//
// Resolved target: zip_extract_archive_entry
// Target address:  0x8260
// GOT/IAT slot:    0x8098
// Slot symbol:     off_8098
// Target type:     <no type info>
// ============================================================

void .zip_extract_archive_entry(/* see target signature */)
{
    // Tail-call to zip_extract_archive_entry via GOT/IAT indirection
    return zip_extract_archive_entry(/* forwarded args */);
}

