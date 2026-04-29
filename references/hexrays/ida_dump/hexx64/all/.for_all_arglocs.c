// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B840
// Name:            .for_all_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B840 jmp     cs:off_4ED408
//
// Resolved target: for_all_arglocs
// Target address:  0x4F1700
// GOT/IAT slot:    0x4ED408
// Slot symbol:     off_4ED408
// Target type:     <no type info>
// ============================================================

void .for_all_arglocs(/* see target signature */)
{
    // Tail-call to for_all_arglocs via GOT/IAT indirection
    return for_all_arglocs(/* forwarded args */);
}

