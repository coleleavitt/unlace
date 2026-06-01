// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116050
// Name:            .get_basic_file_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116050 jmp     cs:get_basic_file_type_ptr
//
// Resolved target: get_basic_file_type
// Target address:  0x8D6418
// GOT/IAT slot:    0x8A1CC8
// Slot symbol:     get_basic_file_type_ptr
// Target type:     <no type info>
// ============================================================

void .get_basic_file_type(/* see target signature */)
{
    // Tail-call to get_basic_file_type via GOT/IAT indirection
    return get_basic_file_type(/* forwarded args */);
}

