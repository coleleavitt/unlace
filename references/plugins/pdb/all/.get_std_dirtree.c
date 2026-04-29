// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D760
// Name:            .get_std_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D760 jmp     cs:off_B3398
//
// Resolved target: get_std_dirtree
// Target address:  0xB3B38
// GOT/IAT slot:    0xB3398
// Slot symbol:     off_B3398
// Target type:     <no type info>
// ============================================================

void .get_std_dirtree(/* see target signature */)
{
    // Tail-call to get_std_dirtree via GOT/IAT indirection
    return get_std_dirtree(/* forwarded args */);
}

