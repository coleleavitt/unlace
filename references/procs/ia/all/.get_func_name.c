// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7200
// Name:            .get_func_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7200 jmp     cs:off_260E8
//
// Resolved target: get_func_name
// Target address:  0x263A0
// GOT/IAT slot:    0x260E8
// Slot symbol:     off_260E8
// Target type:     <no type info>
// ============================================================

void .get_func_name(/* see target signature */)
{
    // Tail-call to get_func_name via GOT/IAT indirection
    return get_func_name(/* forwarded args */);
}

