// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAEC0
// Name:            .create_multirange_qflow_chart
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAEC0 jmp     cs:off_2C7AF48
//
// Resolved target: create_multirange_qflow_chart
// Target address:  0x5DDAB0
// GOT/IAT slot:    0x2C7AF48
// Slot symbol:     off_2C7AF48
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .create_multirange_qflow_chart(/* see target signature */)
{
    // Tail-call to create_multirange_qflow_chart via GOT/IAT indirection
    return create_multirange_qflow_chart(/* forwarded args */);
}

