// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAC70
// Name:            .compare_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAC70 jmp     cs:off_CA620
//
// Resolved target: compare_arglocs
// Target address:  0xD0F80
// GOT/IAT slot:    0xCA620
// Slot symbol:     off_CA620
// Target type:     <no type info>
// ============================================================

void .compare_arglocs(/* see target signature */)
{
    // Tail-call to compare_arglocs via GOT/IAT indirection
    return compare_arglocs(/* forwarded args */);
}

