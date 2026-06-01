// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7A50
// Name:            .parse_command_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7A50 jmp     cs:off_2C79510
//
// Resolved target: parse_command_line
// Target address:  0x8275D0
// GOT/IAT slot:    0x2C79510
// Slot symbol:     off_2C79510
// Target type:     <no type info>
// ============================================================

void .parse_command_line(/* see target signature */)
{
    // Tail-call to parse_command_line via GOT/IAT indirection
    return parse_command_line(/* forwarded args */);
}

