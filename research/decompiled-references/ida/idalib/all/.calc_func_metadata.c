// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9D70
// Name:            .calc_func_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9D70 jmp     cs:off_2C7A6A0
//
// Resolved target: calc_func_metadata
// Target address:  0x7DA080
// GOT/IAT slot:    0x2C7A6A0
// Slot symbol:     off_2C7A6A0
// Target type:     <no type info>
// ============================================================

void .calc_func_metadata(/* see target signature */)
{
    // Tail-call to calc_func_metadata via GOT/IAT indirection
    return calc_func_metadata(/* forwarded args */);
}

