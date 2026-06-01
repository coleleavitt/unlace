// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8E20
// Name:            .get_selected_parser_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8E20 jmp     cs:off_2C79EF8
//
// Resolved target: get_selected_parser_name
// Target address:  0x729D40
// GOT/IAT slot:    0x2C79EF8
// Slot symbol:     off_2C79EF8
// Target type:     <no type info>
// ============================================================

void .get_selected_parser_name(/* see target signature */)
{
    // Tail-call to get_selected_parser_name via GOT/IAT indirection
    return get_selected_parser_name(/* forwarded args */);
}

