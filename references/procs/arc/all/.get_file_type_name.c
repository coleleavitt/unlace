// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x85A0
// Name:            .get_file_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x85A0 jmp     cs:off_2A2B8
//
// Resolved target: get_file_type_name
// Target address:  0x2BCC8
// GOT/IAT slot:    0x2A2B8
// Slot symbol:     off_2A2B8
// Target type:     <no type info>
// ============================================================

void .get_file_type_name(/* see target signature */)
{
    // Tail-call to get_file_type_name via GOT/IAT indirection
    return get_file_type_name(/* forwarded args */);
}

