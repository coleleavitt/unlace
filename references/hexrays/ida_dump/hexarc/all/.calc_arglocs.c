// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B0C0
// Name:            .calc_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B0C0 jmp     cs:off_4BA048
//
// Resolved target: calc_arglocs
// Target address:  0x4BCA80
// GOT/IAT slot:    0x4BA048
// Slot symbol:     off_4BA048
// Target type:     <no type info>
// ============================================================

void .calc_arglocs(/* see target signature */)
{
    // Tail-call to calc_arglocs via GOT/IAT indirection
    return calc_arglocs(/* forwarded args */);
}

