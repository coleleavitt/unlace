// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114330
// Name:            .has_backup_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114330 jmp     cs:has_backup_metadata_ptr
//
// Resolved target: has_backup_metadata
// Target address:  0x8D5168
// GOT/IAT slot:    0x8A0E38
// Slot symbol:     has_backup_metadata_ptr
// Target type:     <no type info>
// ============================================================

void .has_backup_metadata(/* see target signature */)
{
    // Tail-call to has_backup_metadata via GOT/IAT indirection
    return has_backup_metadata(/* forwarded args */);
}

