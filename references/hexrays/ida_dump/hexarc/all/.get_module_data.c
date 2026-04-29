// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9F0
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9F0 jmp     cs:off_4B9CE0
//
// Resolved target: get_module_data
// Target address:  0x4BC700
// GOT/IAT slot:    0x4B9CE0
// Slot symbol:     off_4B9CE0
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

