// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAE40
// Name:            .build_license_source_plugin_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAE40 jmp     cs:off_2C7AF08
//
// Resolved target: build_license_source_plugin_options
// Target address:  0x8A2FA0
// GOT/IAT slot:    0x2C7AF08
// Slot symbol:     off_2C7AF08
// Target type:     <no type info>
// ============================================================

void .build_license_source_plugin_options(/* see target signature */)
{
    // Tail-call to build_license_source_plugin_options via GOT/IAT indirection
    return build_license_source_plugin_options(/* forwarded args */);
}

