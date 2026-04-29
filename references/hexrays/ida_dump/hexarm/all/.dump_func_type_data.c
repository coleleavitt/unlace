// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E7D0
// Name:            .dump_func_type_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E7D0 jmp     cs:off_4E9BD0
//
// Resolved target: dump_func_type_data
// Target address:  0x4EC600
// GOT/IAT slot:    0x4E9BD0
// Slot symbol:     off_4E9BD0
// Target type:     <no type info>
// ============================================================

void .dump_func_type_data(/* see target signature */)
{
    // Tail-call to dump_func_type_data via GOT/IAT indirection
    return dump_func_type_data(/* forwarded args */);
}

