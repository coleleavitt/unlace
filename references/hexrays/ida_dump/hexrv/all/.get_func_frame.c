// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC90
// Name:            .get_func_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC90 jmp     cs:off_4BF630
//
// Resolved target: get_func_frame
// Target address:  0x4C2B20
// GOT/IAT slot:    0x4BF630
// Slot symbol:     off_4BF630
// Target type:     <no type info>
// ============================================================

void .get_func_frame(/* see target signature */)
{
    // Tail-call to get_func_frame via GOT/IAT indirection
    return get_func_frame(/* forwarded args */);
}

