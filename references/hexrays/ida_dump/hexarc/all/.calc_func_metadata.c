// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A970
// Name:            .calc_func_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A970 jmp     cs:off_4B9CA0
//
// Resolved target: calc_func_metadata
// Target address:  0x4BC6C0
// GOT/IAT slot:    0x4B9CA0
// Slot symbol:     off_4B9CA0
// Target type:     <no type info>
// ============================================================

void .calc_func_metadata(/* see target signature */)
{
    // Tail-call to calc_func_metadata via GOT/IAT indirection
    return calc_func_metadata(/* forwarded args */);
}

