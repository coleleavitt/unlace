// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D240
// Name:            .calc_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D240 jmp     cs:off_4EE108
//
// Resolved target: calc_arglocs
// Target address:  0x4F2460
// GOT/IAT slot:    0x4EE108
// Slot symbol:     off_4EE108
// Target type:     <no type info>
// ============================================================

void .calc_arglocs(/* see target signature */)
{
    // Tail-call to calc_arglocs via GOT/IAT indirection
    return calc_arglocs(/* forwarded args */);
}

