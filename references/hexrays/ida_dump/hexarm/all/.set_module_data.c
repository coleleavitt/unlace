// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DE30
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DE30 jmp     cs:off_4E9700
//
// Resolved target: set_module_data
// Target address:  0x4EC118
// GOT/IAT slot:    0x4E9700
// Slot symbol:     off_4E9700
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

