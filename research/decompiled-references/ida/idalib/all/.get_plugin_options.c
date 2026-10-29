// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC270
// Name:            .get_plugin_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC270 jmp     cs:off_2C7B920
//
// Resolved target: get_plugin_options
// Target address:  0x38EB50
// GOT/IAT slot:    0x2C7B920
// Slot symbol:     off_2C7B920
// Target type:     __int64 __fastcall(char *s2)
// ============================================================

/* see target sig */ .get_plugin_options(/* see target signature */)
{
    // Tail-call to get_plugin_options via GOT/IAT indirection
    return get_plugin_options(/* forwarded args */);
}

