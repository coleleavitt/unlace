// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7A0
// Name:            .dump_func_type_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7A0 jmp     cs:off_4C0BB8
//
// Resolved target: dump_func_type_data
// Target address:  0x4C3BC0
// GOT/IAT slot:    0x4C0BB8
// Slot symbol:     off_4C0BB8
// Target type:     <no type info>
// ============================================================

void .dump_func_type_data(/* see target signature */)
{
    // Tail-call to dump_func_type_data via GOT/IAT indirection
    return dump_func_type_data(/* forwarded args */);
}

