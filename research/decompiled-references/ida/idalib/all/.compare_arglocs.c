// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9EC0
// Name:            .compare_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9EC0 jmp     cs:off_2C7A748
//
// Resolved target: compare_arglocs
// Target address:  0x6A8B70
// GOT/IAT slot:    0x2C7A748
// Slot symbol:     off_2C7A748
// Target type:     <no type info>
// ============================================================

void .compare_arglocs(/* see target signature */)
{
    // Tail-call to compare_arglocs via GOT/IAT indirection
    return compare_arglocs(/* forwarded args */);
}

