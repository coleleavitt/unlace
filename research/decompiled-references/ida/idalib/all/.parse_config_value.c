// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A75F0
// Name:            .parse_config_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A75F0 jmp     cs:off_2C792E0
//
// Resolved target: parse_config_value
// Target address:  0x748D20
// GOT/IAT slot:    0x2C792E0
// Slot symbol:     off_2C792E0
// Target type:     <no type info>
// ============================================================

void .parse_config_value(/* see target signature */)
{
    // Tail-call to parse_config_value via GOT/IAT indirection
    return parse_config_value(/* forwarded args */);
}

