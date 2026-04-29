// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D710
// Name:            .parse_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D710 jmp     cs:off_B3370
//
// Resolved target: parse_reg_name
// Target address:  0xB3B10
// GOT/IAT slot:    0xB3370
// Slot symbol:     off_B3370
// Target type:     <no type info>
// ============================================================

void .parse_reg_name(/* see target signature */)
{
    // Tail-call to parse_reg_name via GOT/IAT indirection
    return parse_reg_name(/* forwarded args */);
}

