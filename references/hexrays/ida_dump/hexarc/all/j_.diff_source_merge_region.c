// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A6960
// Name:            j_.diff_source_merge_region
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2A6960 jmp     _diff_source_merge_region
//
// Resolved target: .diff_source_merge_region
// Target address:  0x29BB0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.diff_source_merge_region(/* see target signature */)
{
    // Tail-call to .diff_source_merge_region via direct jump indirection
    return .diff_source_merge_region(/* forwarded args */);
}

