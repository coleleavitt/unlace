// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117510
// Name:            .create_multirange_qflow_chart
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117510 jmp     cs:create_multirange_qflow_chart_ptr
//
// Resolved target: create_multirange_qflow_chart
// Target address:  0x8D7120
// GOT/IAT slot:    0x8A2728
// Slot symbol:     create_multirange_qflow_chart_ptr
// Target type:     <no type info>
// ============================================================

void .create_multirange_qflow_chart(/* see target signature */)
{
    // Tail-call to create_multirange_qflow_chart via GOT/IAT indirection
    return create_multirange_qflow_chart(/* forwarded args */);
}

