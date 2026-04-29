// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B530
// Name:            .create_multirange_qflow_chart
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B530 jmp     cs:off_4CDA80
//
// Resolved target: create_multirange_qflow_chart
// Target address:  0x4D04A0
// GOT/IAT slot:    0x4CDA80
// Slot symbol:     off_4CDA80
// Target type:     <no type info>
// ============================================================

void .create_multirange_qflow_chart(/* see target signature */)
{
    // Tail-call to create_multirange_qflow_chart via GOT/IAT indirection
    return create_multirange_qflow_chart(/* forwarded args */);
}

