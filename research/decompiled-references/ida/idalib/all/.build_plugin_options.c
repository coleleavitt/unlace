// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD3E0
// Name:            .build_plugin_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD3E0 jmp     cs:off_2C7C1D8
//
// Resolved target: build_plugin_options
// Target address:  0x829660
// GOT/IAT slot:    0x2C7C1D8
// Slot symbol:     off_2C7C1D8
// Target type:     <no type info>
// ============================================================

void .build_plugin_options(/* see target signature */)
{
    // Tail-call to build_plugin_options via GOT/IAT indirection
    return build_plugin_options(/* forwarded args */);
}

