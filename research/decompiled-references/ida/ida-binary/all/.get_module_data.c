// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1114A0
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1114A0 jmp     cs:get_module_data_ptr
//
// Resolved target: get_module_data
// Target address:  0x8D3378
// GOT/IAT slot:    0x89F6F0
// Slot symbol:     get_module_data_ptr
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

