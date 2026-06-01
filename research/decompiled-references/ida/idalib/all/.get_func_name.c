// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7FC0
// Name:            .get_func_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7FC0 jmp     cs:off_2C797C8
//
// Resolved target: get_func_name
// Target address:  0x5C92D0
// GOT/IAT slot:    0x2C797C8
// Slot symbol:     off_2C797C8
// Target type:     <no type info>
// ============================================================

void .get_func_name(/* see target signature */)
{
    // Tail-call to get_func_name via GOT/IAT indirection
    return get_func_name(/* forwarded args */);
}

