// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A520
// Name:            .create_multirange_qflow_chart
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A520 jmp     cs:off_4B9A78
//
// Resolved target: create_multirange_qflow_chart
// Target address:  0x4BC478
// GOT/IAT slot:    0x4B9A78
// Slot symbol:     off_4B9A78
// Target type:     <no type info>
// ============================================================

void .create_multirange_qflow_chart(/* see target signature */)
{
    // Tail-call to create_multirange_qflow_chart via GOT/IAT indirection
    return create_multirange_qflow_chart(/* forwarded args */);
}

