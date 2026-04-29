// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EF20
// Name:            .compare_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EF20 jmp     cs:off_4E9F78
//
// Resolved target: compare_arglocs
// Target address:  0x4EC9C8
// GOT/IAT slot:    0x4E9F78
// Slot symbol:     off_4E9F78
// Target type:     <no type info>
// ============================================================

void .compare_arglocs(/* see target signature */)
{
    // Tail-call to compare_arglocs via GOT/IAT indirection
    return compare_arglocs(/* forwarded args */);
}

