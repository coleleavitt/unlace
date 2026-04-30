// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112900
// Name:            .get_func_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112900 jmp     cs:get_func_name_ptr
//
// Resolved target: get_func_name
// Target address:  0x8D4090
// GOT/IAT slot:    0x8A0120
// Slot symbol:     get_func_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_func_name(/* see target signature */)
{
    // Tail-call to get_func_name via GOT/IAT indirection
    return get_func_name(/* forwarded args */);
}

