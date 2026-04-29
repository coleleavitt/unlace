// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA10
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA10 jmp     cs:off_4DACF0
//
// Resolved target: get_module_data
// Target address:  0x4DD710
// GOT/IAT slot:    0x4DACF0
// Slot symbol:     off_4DACF0
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

