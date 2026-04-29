// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C490
// Name:            .parse_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C490 jmp     cs:off_4EDA30
//
// Resolved target: parse_reg_name
// Target address:  0x4F1D50
// GOT/IAT slot:    0x4EDA30
// Slot symbol:     off_4EDA30
// Target type:     <no type info>
// ============================================================

void .parse_reg_name(/* see target signature */)
{
    // Tail-call to parse_reg_name via GOT/IAT indirection
    return parse_reg_name(/* forwarded args */);
}

