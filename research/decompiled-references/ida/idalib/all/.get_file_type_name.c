// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8280
// Name:            .get_file_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8280 jmp     cs:off_2C79928
//
// Resolved target: get_file_type_name
// Target address:  0x642150
// GOT/IAT slot:    0x2C79928
// Slot symbol:     off_2C79928
// Target type:     <no type info>
// ============================================================

void .get_file_type_name(/* see target signature */)
{
    // Tail-call to get_file_type_name via GOT/IAT indirection
    return get_file_type_name(/* forwarded args */);
}

