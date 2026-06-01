// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112CD0
// Name:            .get_file_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112CD0 jmp     cs:get_file_type_name_ptr
//
// Resolved target: get_file_type_name
// Target address:  0x8D4308
// GOT/IAT slot:    0x8A0308
// Slot symbol:     get_file_type_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_file_type_name(/* see target signature */)
{
    // Tail-call to get_file_type_name via GOT/IAT indirection
    return get_file_type_name(/* forwarded args */);
}

