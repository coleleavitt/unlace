// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1189E0
// Name:            .dump_func_type_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1189E0 jmp     cs:dump_func_type_data_ptr
//
// Resolved target: dump_func_type_data
// Target address:  0x8D7E10
// GOT/IAT slot:    0x8A3190
// Slot symbol:     dump_func_type_data_ptr
// Target type:     <no type info>
// ============================================================

void .dump_func_type_data(/* see target signature */)
{
    // Tail-call to dump_func_type_data via GOT/IAT indirection
    return dump_func_type_data(/* forwarded args */);
}

