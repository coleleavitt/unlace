// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45EC90
// Name:            merge_handler_ctr
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x45EC90 jmp     merge_handler_ctr_0
//
// Resolved target: merge_handler_ctr_0
// Target address:  0x45E800
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(_QWORD *, const char *)
// ============================================================

/* see target sig */ merge_handler_ctr(/* see target signature */)
{
    // Tail-call to merge_handler_ctr_0 via direct jump indirection
    return merge_handler_ctr_0(/* forwarded args */);
}

