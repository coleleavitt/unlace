// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9D80
// Name:            .create_qflow_chart
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9D80 jmp     cs:off_2C7A6A8
//
// Resolved target: create_qflow_chart
// Target address:  0x5DE120
// GOT/IAT slot:    0x2C7A6A8
// Slot symbol:     off_2C7A6A8
// Target type:     <no type info>
// ============================================================

void .create_qflow_chart(/* see target signature */)
{
    // Tail-call to create_qflow_chart via GOT/IAT indirection
    return create_qflow_chart(/* forwarded args */);
}

