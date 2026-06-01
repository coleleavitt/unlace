// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD750
// Name:            .merge_handler_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD750 jmp     cs:off_2C7C390
//
// Resolved target: merge_handler_dtr
// Target address:  0x45AB20
// GOT/IAT slot:    0x2C7C390
// Slot symbol:     off_2C7C390
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .merge_handler_dtr(/* see target signature */)
{
    // Tail-call to merge_handler_dtr via GOT/IAT indirection
    return merge_handler_dtr(/* forwarded args */);
}

