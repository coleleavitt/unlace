// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x209C0
// Name:            .parse_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x209C0 jmp     cs:off_954C8
//
// Resolved target: parse_reg_name
// Target address:  0x95F00
// GOT/IAT slot:    0x954C8
// Slot symbol:     off_954C8
// Target type:     <no type info>
// ============================================================

void .parse_reg_name(/* see target signature */)
{
    // Tail-call to parse_reg_name via GOT/IAT indirection
    return parse_reg_name(/* forwarded args */);
}

