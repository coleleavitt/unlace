// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA670
// Name:            .parse_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA670 jmp     cs:off_35320
//
// Resolved target: parse_reg_name
// Target address:  0x35970
// GOT/IAT slot:    0x35320
// Slot symbol:     off_35320
// Target type:     <no type info>
// ============================================================

void .parse_reg_name(/* see target signature */)
{
    // Tail-call to parse_reg_name via GOT/IAT indirection
    return parse_reg_name(/* forwarded args */);
}

