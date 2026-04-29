// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EA50
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EA50 jmp     cs:off_4E9D10
//
// Resolved target: get_module_data
// Target address:  0x4EC750
// GOT/IAT slot:    0x4E9D10
// Slot symbol:     off_4E9D10
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

