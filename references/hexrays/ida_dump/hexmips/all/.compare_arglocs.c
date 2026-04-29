// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEF0
// Name:            .compare_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEF0 jmp     cs:off_4CDF60
//
// Resolved target: compare_arglocs
// Target address:  0x4D09B0
// GOT/IAT slot:    0x4CDF60
// Slot symbol:     off_4CDF60
// Target type:     <no type info>
// ============================================================

void .compare_arglocs(/* see target signature */)
{
    // Tail-call to compare_arglocs via GOT/IAT indirection
    return compare_arglocs(/* forwarded args */);
}

