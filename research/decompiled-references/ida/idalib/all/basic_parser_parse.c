// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7A8820
// Name:            basic_parser_parse
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7A8820 jmp     basic_parser_parse_0
//
// Resolved target: basic_parser_parse_0
// Target address:  0x7A86D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, int)
// ============================================================

/* see target sig */ basic_parser_parse(/* see target signature */)
{
    // Tail-call to basic_parser_parse_0 via direct jump indirection
    return basic_parser_parse_0(/* forwarded args */);
}

