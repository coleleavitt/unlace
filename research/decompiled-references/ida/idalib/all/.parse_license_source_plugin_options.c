// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC070
// Name:            .parse_license_source_plugin_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC070 jmp     cs:off_2C7B820
//
// Resolved target: parse_license_source_plugin_options
// Target address:  0x8A3740
// GOT/IAT slot:    0x2C7B820
// Slot symbol:     off_2C7B820
// Target type:     <no type info>
// ============================================================

void .parse_license_source_plugin_options(/* see target signature */)
{
    // Tail-call to parse_license_source_plugin_options via GOT/IAT indirection
    return parse_license_source_plugin_options(/* forwarded args */);
}

