// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A79D0
// Name:            .calc_func_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A79D0 jmp     cs:off_2C794D0
//
// Resolved target: calc_func_size
// Target address:  0x5CB900
// GOT/IAT slot:    0x2C794D0
// Slot symbol:     off_2C794D0
// Target type:     <no type info>
// ============================================================

void .calc_func_size(/* see target signature */)
{
    // Tail-call to calc_func_size via GOT/IAT indirection
    return calc_func_size(/* forwarded args */);
}

