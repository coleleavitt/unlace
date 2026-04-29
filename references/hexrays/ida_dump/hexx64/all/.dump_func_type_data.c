// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C860
// Name:            .dump_func_type_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C860 jmp     cs:off_4EDC18
//
// Resolved target: dump_func_type_data
// Target address:  0x4F1F50
// GOT/IAT slot:    0x4EDC18
// Slot symbol:     off_4EDC18
// Target type:     <no type info>
// ============================================================

void .dump_func_type_data(/* see target signature */)
{
    // Tail-call to dump_func_type_data via GOT/IAT indirection
    return dump_func_type_data(/* forwarded args */);
}

