// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4120
// Name:            .run_plugin
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4120 jmp     cs:off_23078
//
// Resolved target: run_plugin
// Target address:  0x23498
// GOT/IAT slot:    0x23078
// Slot symbol:     off_23078
// Target type:     <no type info>
// ============================================================

void .run_plugin(/* see target signature */)
{
    // Tail-call to run_plugin via GOT/IAT indirection
    return run_plugin(/* forwarded args */);
}

