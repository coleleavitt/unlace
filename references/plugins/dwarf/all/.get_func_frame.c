// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA470
// Name:            .get_func_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA470 jmp     cs:off_CA220
//
// Resolved target: get_func_frame
// Target address:  0xD0B58
// GOT/IAT slot:    0xCA220
// Slot symbol:     off_CA220
// Target type:     <no type info>
// ============================================================

void .get_func_frame(/* see target signature */)
{
    // Tail-call to get_func_frame via GOT/IAT indirection
    return get_func_frame(/* forwarded args */);
}

