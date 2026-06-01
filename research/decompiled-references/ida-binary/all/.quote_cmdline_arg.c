// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118AA0
// Name:            .quote_cmdline_arg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118AA0 jmp     cs:quote_cmdline_arg_ptr
//
// Resolved target: quote_cmdline_arg
// Target address:  0x8D7E90
// GOT/IAT slot:    0x8A31F0
// Slot symbol:     quote_cmdline_arg_ptr
// Target type:     <no type info>
// ============================================================

void .quote_cmdline_arg(/* see target signature */)
{
    // Tail-call to quote_cmdline_arg via GOT/IAT indirection
    return quote_cmdline_arg(/* forwarded args */);
}

