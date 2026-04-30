// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112950
// Name:            .find_srclang_parser
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112950 jmp     cs:find_srclang_parser_ptr
//
// Resolved target: find_srclang_parser
// Target address:  0x8D40C0
// GOT/IAT slot:    0x8A0148
// Slot symbol:     find_srclang_parser_ptr
// Target type:     <no type info>
// ============================================================

void .find_srclang_parser(/* see target signature */)
{
    // Tail-call to find_srclang_parser via GOT/IAT indirection
    return find_srclang_parser(/* forwarded args */);
}

