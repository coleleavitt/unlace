// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B0B0
// Name:            .get_func_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B0B0 jmp     cs:off_4C0840
//
// Resolved target: get_func_name
// Target address:  0x4C3838
// GOT/IAT slot:    0x4C0840
// Slot symbol:     off_4C0840
// Target type:     <no type info>
// ============================================================

void .get_func_name(/* see target signature */)
{
    // Tail-call to get_func_name via GOT/IAT indirection
    return get_func_name(/* forwarded args */);
}

