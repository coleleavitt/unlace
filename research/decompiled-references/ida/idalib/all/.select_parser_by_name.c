// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8440
// Name:            .select_parser_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8440 jmp     cs:off_2C79A08
//
// Resolved target: select_parser_by_name
// Target address:  0x729A50
// GOT/IAT slot:    0x2C79A08
// Slot symbol:     off_2C79A08
// Target type:     <no type info>
// ============================================================

void .select_parser_by_name(/* see target signature */)
{
    // Tail-call to select_parser_by_name via GOT/IAT indirection
    return select_parser_by_name(/* forwarded args */);
}

