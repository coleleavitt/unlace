// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64E0
// Name:            .get_func_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64E0 jmp     cs:off_2F258
//
// Resolved target: get_func_name
// Target address:  0x2F8C8
// GOT/IAT slot:    0x2F258
// Slot symbol:     off_2F258
// Target type:     <no type info>
// ============================================================

void .get_func_name(/* see target signature */)
{
    // Tail-call to get_func_name via GOT/IAT indirection
    return get_func_name(/* forwarded args */);
}

