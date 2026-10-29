// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC670
// Name:            .plugin_name_from_path_or_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC670 jmp     cs:off_2C7BB20
//
// Resolved target: plugin_name_from_path_or_name
// Target address:  0x84F830
// GOT/IAT slot:    0x2C7BB20
// Slot symbol:     off_2C7BB20
// Target type:     <no type info>
// ============================================================

void .plugin_name_from_path_or_name(/* see target signature */)
{
    // Tail-call to plugin_name_from_path_or_name via GOT/IAT indirection
    return plugin_name_from_path_or_name(/* forwarded args */);
}

