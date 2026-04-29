// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C130
// Name:            .get_func_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C130 jmp     cs:off_4ED880
//
// Resolved target: get_func_name
// Target address:  0x4F1B98
// GOT/IAT slot:    0x4ED880
// Slot symbol:     off_4ED880
// Target type:     <no type info>
// ============================================================

void .get_func_name(/* see target signature */)
{
    // Tail-call to get_func_name via GOT/IAT indirection
    return get_func_name(/* forwarded args */);
}

