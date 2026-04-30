// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111990
// Name:            .parse_config_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111990 jmp     cs:parse_config_value_ptr
//
// Resolved target: parse_config_value
// Target address:  0x8D36C0
// GOT/IAT slot:    0x89F968
// Slot symbol:     parse_config_value_ptr
// Target type:     <no type info>
// ============================================================

void .parse_config_value(/* see target signature */)
{
    // Tail-call to parse_config_value via GOT/IAT indirection
    return parse_config_value(/* forwarded args */);
}

