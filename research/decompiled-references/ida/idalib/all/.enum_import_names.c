// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A95A0
// Name:            .enum_import_names
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A95A0 jmp     cs:off_2C7A2B8
//
// Resolved target: enum_import_names
// Target address:  0x6244A0
// GOT/IAT slot:    0x2C7A2B8
// Slot symbol:     off_2C7A2B8
// Target type:     <no type info>
// ============================================================

void .enum_import_names(/* see target signature */)
{
    // Tail-call to enum_import_names via GOT/IAT indirection
    return enum_import_names(/* forwarded args */);
}

