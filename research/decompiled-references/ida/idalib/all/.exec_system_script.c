// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7CE0
// Name:            .exec_system_script
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7CE0 jmp     cs:off_2C79658
//
// Resolved target: exec_system_script
// Target address:  0x78A540
// GOT/IAT slot:    0x2C79658
// Slot symbol:     off_2C79658
// Target type:     <no type info>
// ============================================================

void .exec_system_script(/* see target signature */)
{
    // Tail-call to exec_system_script via GOT/IAT indirection
    return exec_system_script(/* forwarded args */);
}

