// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29810
// Name:            .for_all_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29810 jmp     cs:off_4B93F0
//
// Resolved target: for_all_arglocs
// Target address:  0x4BBDC0
// GOT/IAT slot:    0x4B93F0
// Slot symbol:     off_4B93F0
// Target type:     <no type info>
// ============================================================

void .for_all_arglocs(/* see target signature */)
{
    // Tail-call to for_all_arglocs via GOT/IAT indirection
    return for_all_arglocs(/* forwarded args */);
}

