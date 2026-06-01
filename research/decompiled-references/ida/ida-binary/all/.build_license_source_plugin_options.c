// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117430
// Name:            .build_license_source_plugin_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117430 jmp     cs:build_license_source_plugin_options_ptr
//
// Resolved target: build_license_source_plugin_options
// Target address:  0x8D70A0
// GOT/IAT slot:    0x8A26B8
// Slot symbol:     build_license_source_plugin_options_ptr
// Target type:     <no type info>
// ============================================================

void .build_license_source_plugin_options(/* see target signature */)
{
    // Tail-call to build_license_source_plugin_options via GOT/IAT indirection
    return build_license_source_plugin_options(/* forwarded args */);
}

