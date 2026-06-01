// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115730
// Name:            .calc_func_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115730 jmp     cs:calc_func_metadata_ptr
//
// Resolved target: calc_func_metadata
// Target address:  0x8D5E38
// GOT/IAT slot:    0x8A1838
// Slot symbol:     calc_func_metadata_ptr
// Target type:     <no type info>
// ============================================================

void .calc_func_metadata(/* see target signature */)
{
    // Tail-call to calc_func_metadata via GOT/IAT indirection
    return calc_func_metadata(/* forwarded args */);
}

