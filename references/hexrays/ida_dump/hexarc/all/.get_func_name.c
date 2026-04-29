// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A0A0
// Name:            .get_func_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A0A0 jmp     cs:off_4B9838
//
// Resolved target: get_func_name
// Target address:  0x4BC238
// GOT/IAT slot:    0x4B9838
// Slot symbol:     off_4B9838
// Target type:     <no type info>
// ============================================================

void .get_func_name(/* see target signature */)
{
    // Tail-call to get_func_name via GOT/IAT indirection
    return get_func_name(/* forwarded args */);
}

