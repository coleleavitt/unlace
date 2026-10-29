// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A72F0
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A72F0 jmp     cs:off_2C79160
//
// Resolved target: get_module_data
// Target address:  0x3FB870
// GOT/IAT slot:    0x2C79160
// Slot symbol:     off_2C79160
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

