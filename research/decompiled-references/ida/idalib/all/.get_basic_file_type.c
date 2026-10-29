// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA300
// Name:            .get_basic_file_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA300 jmp     cs:off_2C7A968
//
// Resolved target: get_basic_file_type
// Target address:  0x643600
// GOT/IAT slot:    0x2C7A968
// Slot symbol:     off_2C7A968
// Target type:     <no type info>
// ============================================================

void .get_basic_file_type(/* see target signature */)
{
    // Tail-call to get_basic_file_type via GOT/IAT indirection
    return get_basic_file_type(/* forwarded args */);
}

