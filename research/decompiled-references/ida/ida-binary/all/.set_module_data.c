// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118CD0
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118CD0 jmp     cs:set_module_data_ptr
//
// Resolved target: set_module_data
// Target address:  0x8D7FC0
// GOT/IAT slot:    0x8A3308
// Slot symbol:     set_module_data_ptr
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

