// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x83B0
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x83B0 jmp     cs:off_2A1C0
//
// Resolved target: set_module_data
// Target address:  0x2BBD0
// GOT/IAT slot:    0x2A1C0
// Slot symbol:     off_2A1C0
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

