// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA2E0
// Name:            .validate_idb_names
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA2E0 jmp     cs:off_2C7A958
//
// Resolved target: validate_idb_names
// Target address:  0x595F60
// GOT/IAT slot:    0x2C7A958
// Slot symbol:     off_2C7A958
// Target type:     <no type info>
// ============================================================

void .validate_idb_names(/* see target signature */)
{
    // Tail-call to validate_idb_names via GOT/IAT indirection
    return validate_idb_names(/* forwarded args */);
}

