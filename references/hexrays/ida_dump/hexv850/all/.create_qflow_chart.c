// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA10
// Name:            .create_qflow_chart
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA10 jmp     cs:off_4C0CF0
//
// Resolved target: create_qflow_chart
// Target address:  0x4C3D08
// GOT/IAT slot:    0x4C0CF0
// Slot symbol:     off_4C0CF0
// Target type:     <no type info>
// ============================================================

void .create_qflow_chart(/* see target signature */)
{
    // Tail-call to create_qflow_chart via GOT/IAT indirection
    return create_qflow_chart(/* forwarded args */);
}

