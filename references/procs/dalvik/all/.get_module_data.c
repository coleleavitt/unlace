// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5440
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5440 jmp     cs:off_1A208
//
// Resolved target: get_module_data
// Target address:  0x1A5A0
// GOT/IAT slot:    0x1A208
// Slot symbol:     off_1A208
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

