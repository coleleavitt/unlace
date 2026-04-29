// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A3C0
// Name:            .parse_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A3C0 jmp     cs:off_4B99C8
//
// Resolved target: parse_reg_name
// Target address:  0x4BC3C8
// GOT/IAT slot:    0x4B99C8
// Slot symbol:     off_4B99C8
// Target type:     <no type info>
// ============================================================

void .parse_reg_name(/* see target signature */)
{
    // Tail-call to parse_reg_name via GOT/IAT indirection
    return parse_reg_name(/* forwarded args */);
}

