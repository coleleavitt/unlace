// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABCD0
// Name:            .quote_cmdline_arg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABCD0 jmp     cs:off_2C7B650
//
// Resolved target: quote_cmdline_arg
// Target address:  0x828360
// GOT/IAT slot:    0x2C7B650
// Slot symbol:     off_2C7B650
// Target type:     <no type info>
// ============================================================

void .quote_cmdline_arg(/* see target signature */)
{
    // Tail-call to quote_cmdline_arg via GOT/IAT indirection
    return quote_cmdline_arg(/* forwarded args */);
}

