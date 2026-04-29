// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CB10
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CB10 jmp     cs:off_4EDD70
//
// Resolved target: get_module_data
// Target address:  0x4F20B0
// GOT/IAT slot:    0x4EDD70
// Slot symbol:     off_4EDD70
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

