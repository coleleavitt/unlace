// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEE0
// Name:            .compare_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEE0 jmp     cs:off_4BFF58
//
// Resolved target: compare_arglocs
// Target address:  0x4C3480
// GOT/IAT slot:    0x4BFF58
// Slot symbol:     off_4BFF58
// Target type:     <no type info>
// ============================================================

void .compare_arglocs(/* see target signature */)
{
    // Tail-call to compare_arglocs via GOT/IAT indirection
    return compare_arglocs(/* forwarded args */);
}

