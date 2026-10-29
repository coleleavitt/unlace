// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB8F0
// Name:            .parse_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB8F0 jmp     cs:off_2C7B460
//
// Resolved target: parse_reg_name
// Target address:  0x5EC8D0
// GOT/IAT slot:    0x2C7B460
// Slot symbol:     off_2C7B460
// Target type:     <no type info>
// ============================================================

void .parse_reg_name(/* see target signature */)
{
    // Tail-call to parse_reg_name via GOT/IAT indirection
    return parse_reg_name(/* forwarded args */);
}

