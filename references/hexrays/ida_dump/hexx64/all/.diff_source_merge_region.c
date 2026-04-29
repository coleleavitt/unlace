// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC00
// Name:            .diff_source_merge_region
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC00 jmp     cs:off_4ED5E8
//
// Resolved target: diff_source_merge_region
// Target address:  0x4F18F0
// GOT/IAT slot:    0x4ED5E8
// Slot symbol:     off_4ED5E8
// Target type:     <no type info>
// ============================================================

void .diff_source_merge_region(/* see target signature */)
{
    // Tail-call to diff_source_merge_region via GOT/IAT indirection
    return diff_source_merge_region(/* forwarded args */);
}

