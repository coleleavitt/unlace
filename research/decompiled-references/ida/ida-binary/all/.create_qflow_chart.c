// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115740
// Name:            .create_qflow_chart
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115740 jmp     cs:create_qflow_chart_ptr
//
// Resolved target: create_qflow_chart
// Target address:  0x8D5E40
// GOT/IAT slot:    0x8A1840
// Slot symbol:     create_qflow_chart_ptr
// Target type:     <no type info>
// ============================================================

void .create_qflow_chart(/* see target signature */)
{
    // Tail-call to create_qflow_chart via GOT/IAT indirection
    return create_qflow_chart(/* forwarded args */);
}

