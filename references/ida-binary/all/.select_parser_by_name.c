// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112F20
// Name:            .select_parser_by_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112F20 jmp     cs:select_parser_by_name_ptr
//
// Resolved target: select_parser_by_name
// Target address:  0x8D4498
// GOT/IAT slot:    0x8A0430
// Slot symbol:     select_parser_by_name_ptr
// Target type:     <no type info>
// ============================================================

void .select_parser_by_name(/* see target signature */)
{
    // Tail-call to select_parser_by_name via GOT/IAT indirection
    return select_parser_by_name(/* forwarded args */);
}

