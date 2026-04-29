// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E400
// Name:            .parse_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E400 jmp     cs:off_4E99E8
//
// Resolved target: parse_reg_name
// Target address:  0x4EC408
// GOT/IAT slot:    0x4E99E8
// Slot symbol:     off_4E99E8
// Target type:     <no type info>
// ============================================================

void .parse_reg_name(/* see target signature */)
{
    // Tail-call to parse_reg_name via GOT/IAT indirection
    return parse_reg_name(/* forwarded args */);
}

