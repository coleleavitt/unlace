// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21E0
// Name:            .exec_system_script
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21E0 jmp     cs:off_80D8
//
// Resolved target: exec_system_script
// Target address:  0x82B8
// GOT/IAT slot:    0x80D8
// Slot symbol:     off_80D8
// Target type:     <no type info>
// ============================================================

void .exec_system_script(/* see target signature */)
{
    // Tail-call to exec_system_script via GOT/IAT indirection
    return exec_system_script(/* forwarded args */);
}

