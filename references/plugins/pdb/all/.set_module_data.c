// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D4F0
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D4F0 jmp     cs:off_B3260
//
// Resolved target: set_module_data
// Target address:  0xB3A00
// GOT/IAT slot:    0xB3260
// Slot symbol:     off_B3260
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

