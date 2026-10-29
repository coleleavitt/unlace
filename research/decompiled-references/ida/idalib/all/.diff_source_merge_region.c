// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAAC0
// Name:            .diff_source_merge_region
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAAC0 jmp     cs:off_2C7AD48
//
// Resolved target: diff_source_merge_region
// Target address:  0x4015E0
// GOT/IAT slot:    0x2C7AD48
// Slot symbol:     off_2C7AD48
// Target type:     <no type info>
// ============================================================

void .diff_source_merge_region(/* see target signature */)
{
    // Tail-call to diff_source_merge_region via GOT/IAT indirection
    return diff_source_merge_region(/* forwarded args */);
}

