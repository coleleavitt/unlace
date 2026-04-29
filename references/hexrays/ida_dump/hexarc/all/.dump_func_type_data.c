// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A770
// Name:            .dump_func_type_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A770 jmp     cs:off_4B9BA0
//
// Resolved target: dump_func_type_data
// Target address:  0x4BC5B0
// GOT/IAT slot:    0x4B9BA0
// Slot symbol:     off_4B9BA0
// Target type:     <no type info>
// ============================================================

void .dump_func_type_data(/* see target signature */)
{
    // Tail-call to dump_func_type_data via GOT/IAT indirection
    return dump_func_type_data(/* forwarded args */);
}

