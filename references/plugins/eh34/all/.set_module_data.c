// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6350
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6350 jmp     cs:off_8D190
//
// Resolved target: set_module_data
// Target address:  0x8D728
// GOT/IAT slot:    0x8D190
// Slot symbol:     off_8D190
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

