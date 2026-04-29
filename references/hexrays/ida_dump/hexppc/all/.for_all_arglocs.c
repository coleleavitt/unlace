// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A810
// Name:            .for_all_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A810 jmp     cs:off_4DA3F0
//
// Resolved target: for_all_arglocs
// Target address:  0x4DCDC0
// GOT/IAT slot:    0x4DA3F0
// Slot symbol:     off_4DA3F0
// Target type:     <no type info>
// ============================================================

void .for_all_arglocs(/* see target signature */)
{
    // Tail-call to for_all_arglocs via GOT/IAT indirection
    return for_all_arglocs(/* forwarded args */);
}

