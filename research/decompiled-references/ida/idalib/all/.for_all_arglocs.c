// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A91E0
// Name:            .for_all_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A91E0 jmp     cs:off_2C7A0D8
//
// Resolved target: for_all_arglocs
// Target address:  0x6A84E0
// GOT/IAT slot:    0x2C7A0D8
// Slot symbol:     off_2C7A0D8
// Target type:     <no type info>
// ============================================================

void .for_all_arglocs(/* see target signature */)
{
    // Tail-call to for_all_arglocs via GOT/IAT indirection
    return for_all_arglocs(/* forwarded args */);
}

