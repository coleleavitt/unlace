// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CA90
// Name:            .calc_func_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CA90 jmp     cs:off_4EDD30
//
// Resolved target: calc_func_metadata
// Target address:  0x4F2070
// GOT/IAT slot:    0x4EDD30
// Slot symbol:     off_4EDD30
// Target type:     <no type info>
// ============================================================

void .calc_func_metadata(/* see target signature */)
{
    // Tail-call to calc_func_metadata via GOT/IAT indirection
    return calc_func_metadata(/* forwarded args */);
}

