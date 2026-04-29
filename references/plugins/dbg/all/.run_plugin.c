// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30E0
// Name:            .run_plugin
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30E0 jmp     cs:off_13058
//
// Resolved target: run_plugin
// Target address:  0x133D0
// GOT/IAT slot:    0x13058
// Slot symbol:     off_13058
// Target type:     <no type info>
// ============================================================

void .run_plugin(/* see target signature */)
{
    // Tail-call to run_plugin via GOT/IAT indirection
    return run_plugin(/* forwarded args */);
}

