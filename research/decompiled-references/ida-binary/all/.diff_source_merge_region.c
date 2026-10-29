// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116DA0
// Name:            .diff_source_merge_region
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116DA0 jmp     cs:diff_source_merge_region_ptr
//
// Resolved target: diff_source_merge_region
// Target address:  0x8D6C58
// GOT/IAT slot:    0x8A2370
// Slot symbol:     diff_source_merge_region_ptr
// Target type:     <no type info>
// ============================================================

void .diff_source_merge_region(/* see target signature */)
{
    // Tail-call to diff_source_merge_region via GOT/IAT indirection
    return diff_source_merge_region(/* forwarded args */);
}

