// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B9A0
// Name:            .calc_func_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B9A0 jmp     cs:off_4C0CB8
//
// Resolved target: calc_func_metadata
// Target address:  0x4C3CD0
// GOT/IAT slot:    0x4C0CB8
// Slot symbol:     off_4C0CB8
// Target type:     <no type info>
// ============================================================

void .calc_func_metadata(/* see target signature */)
{
    // Tail-call to calc_func_metadata via GOT/IAT indirection
    return calc_func_metadata(/* forwarded args */);
}

