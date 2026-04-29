// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CB00
// Name:            .create_qflow_chart
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CB00 jmp     cs:off_4EDD68
//
// Resolved target: create_qflow_chart
// Target address:  0x4F20A8
// GOT/IAT slot:    0x4EDD68
// Slot symbol:     off_4EDD68
// Target type:     <no type info>
// ============================================================

void .create_qflow_chart(/* see target signature */)
{
    // Tail-call to create_qflow_chart via GOT/IAT indirection
    return create_qflow_chart(/* forwarded args */);
}

