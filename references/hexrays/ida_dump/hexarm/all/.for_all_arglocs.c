// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D820
// Name:            .for_all_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D820 jmp     cs:off_4E93F8
//
// Resolved target: for_all_arglocs
// Target address:  0x4EBDE8
// GOT/IAT slot:    0x4E93F8
// Slot symbol:     off_4E93F8
// Target type:     <no type info>
// ============================================================

void .for_all_arglocs(/* see target signature */)
{
    // Tail-call to for_all_arglocs via GOT/IAT indirection
    return for_all_arglocs(/* forwarded args */);
}

