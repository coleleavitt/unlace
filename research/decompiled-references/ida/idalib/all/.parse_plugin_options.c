// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A76F0
// Name:            .parse_plugin_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A76F0 jmp     cs:off_2C79360
//
// Resolved target: parse_plugin_options
// Target address:  0x828D60
// GOT/IAT slot:    0x2C79360
// Slot symbol:     off_2C79360
// Target type:     <no type info>
// ============================================================

void .parse_plugin_options(/* see target signature */)
{
    // Tail-call to parse_plugin_options via GOT/IAT indirection
    return parse_plugin_options(/* forwarded args */);
}

