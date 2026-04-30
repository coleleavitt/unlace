// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119190
// Name:            .get_srclang_parser_internal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119190 jmp     cs:get_srclang_parser_internal_ptr
//
// Resolved target: get_srclang_parser_internal
// Target address:  0x8D82C8
// GOT/IAT slot:    0x8A3568
// Slot symbol:     get_srclang_parser_internal_ptr
// Target type:     <no type info>
// ============================================================

void .get_srclang_parser_internal(/* see target signature */)
{
    // Tail-call to get_srclang_parser_internal via GOT/IAT indirection
    return get_srclang_parser_internal(/* forwarded args */);
}

