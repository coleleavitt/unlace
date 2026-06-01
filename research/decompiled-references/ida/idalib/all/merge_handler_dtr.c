// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45AB20
// Name:            merge_handler_dtr
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x45AB20 jmp     merge_handler_dtr_0
//
// Resolved target: merge_handler_dtr_0
// Target address:  0x4590B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ merge_handler_dtr(/* see target signature */)
{
    // Tail-call to merge_handler_dtr_0 via direct jump indirection
    return merge_handler_dtr_0(/* forwarded args */);
}

