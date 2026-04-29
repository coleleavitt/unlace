// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F120
// Name:            .calc_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F120 jmp     cs:off_4EA078
//
// Resolved target: calc_arglocs
// Target address:  0x4ECAD0
// GOT/IAT slot:    0x4EA078
// Slot symbol:     off_4EA078
// Target type:     <no type info>
// ============================================================

void .calc_arglocs(/* see target signature */)
{
    // Tail-call to calc_arglocs via GOT/IAT indirection
    return calc_arglocs(/* forwarded args */);
}

