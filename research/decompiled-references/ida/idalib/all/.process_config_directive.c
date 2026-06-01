// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA550
// Name:            .process_config_directive
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA550 jmp     cs:off_2C7AA90
//
// Resolved target: process_config_directive
// Target address:  0x600590
// GOT/IAT slot:    0x2C7AA90
// Slot symbol:     off_2C7AA90
// Target type:     <no type info>
// ============================================================

void .process_config_directive(/* see target signature */)
{
    // Tail-call to process_config_directive via GOT/IAT indirection
    return process_config_directive(/* forwarded args */);
}

