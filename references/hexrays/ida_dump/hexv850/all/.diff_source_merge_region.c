// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABB0
// Name:            .diff_source_merge_region
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABB0 jmp     cs:off_4C05C0
//
// Resolved target: diff_source_merge_region
// Target address:  0x4C35A8
// GOT/IAT slot:    0x4C05C0
// Slot symbol:     off_4C05C0
// Target type:     <no type info>
// ============================================================

void .diff_source_merge_region(/* see target signature */)
{
    // Tail-call to diff_source_merge_region via GOT/IAT indirection
    return diff_source_merge_region(/* forwarded args */);
}

