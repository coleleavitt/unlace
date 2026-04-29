// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E9D0
// Name:            .calc_func_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E9D0 jmp     cs:off_4E9CD0
//
// Resolved target: calc_func_metadata
// Target address:  0x4EC710
// GOT/IAT slot:    0x4E9CD0
// Slot symbol:     off_4E9CD0
// Target type:     <no type info>
// ============================================================

void .calc_func_metadata(/* see target signature */)
{
    // Tail-call to calc_func_metadata via GOT/IAT indirection
    return calc_func_metadata(/* forwarded args */);
}

