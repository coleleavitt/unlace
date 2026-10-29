// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4015E0
// Name:            diff_source_merge_region
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4015E0 jmp     diff_source_merge_region_0
//
// Resolved target: diff_source_merge_region_0
// Target address:  0x400F90
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     char __fastcall(__int64, __int64, unsigned __int64 *)
// ============================================================

/* see target sig */ diff_source_merge_region(/* see target signature */)
{
    // Tail-call to diff_source_merge_region_0 via direct jump indirection
    return diff_source_merge_region_0(/* forwarded args */);
}

