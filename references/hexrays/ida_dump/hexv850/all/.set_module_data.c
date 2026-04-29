// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE10
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE10 jmp     cs:off_4C06F0
//
// Resolved target: set_module_data
// Target address:  0x4C36E0
// GOT/IAT slot:    0x4C06F0
// Slot symbol:     off_4C06F0
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

