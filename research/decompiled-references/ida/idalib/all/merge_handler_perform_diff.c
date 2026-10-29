// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45ADB0
// Name:            merge_handler_perform_diff
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x45ADB0 jmp     merge_handler_perform_diff_0
//
// Resolved target: merge_handler_perform_diff_0
// Target address:  0x4582A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ merge_handler_perform_diff(/* see target signature */)
{
    // Tail-call to merge_handler_perform_diff_0 via direct jump indirection
    return merge_handler_perform_diff_0(/* forwarded args */);
}

