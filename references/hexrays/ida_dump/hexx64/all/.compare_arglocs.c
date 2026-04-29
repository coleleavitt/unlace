// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D030
// Name:            .compare_arglocs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D030 jmp     cs:off_4EE000
//
// Resolved target: compare_arglocs
// Target address:  0x4F2350
// GOT/IAT slot:    0x4EE000
// Slot symbol:     off_4EE000
// Target type:     <no type info>
// ============================================================

void .compare_arglocs(/* see target signature */)
{
    // Tail-call to compare_arglocs via GOT/IAT indirection
    return compare_arglocs(/* forwarded args */);
}

