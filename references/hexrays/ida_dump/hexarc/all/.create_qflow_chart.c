// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9E0
// Name:            .create_qflow_chart
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9E0 jmp     cs:off_4B9CD8
//
// Resolved target: create_qflow_chart
// Target address:  0x4BC6F8
// GOT/IAT slot:    0x4B9CD8
// Slot symbol:     off_4B9CD8
// Target type:     <no type info>
// ============================================================

void .create_qflow_chart(/* see target signature */)
{
    // Tail-call to create_qflow_chart via GOT/IAT indirection
    return create_qflow_chart(/* forwarded args */);
}

