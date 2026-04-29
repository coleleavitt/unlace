// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EA40
// Name:            .create_qflow_chart
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EA40 jmp     cs:off_4E9D08
//
// Resolved target: create_qflow_chart
// Target address:  0x4EC748
// GOT/IAT slot:    0x4E9D08
// Slot symbol:     off_4E9D08
// Target type:     <no type info>
// ============================================================

void .create_qflow_chart(/* see target signature */)
{
    // Tail-call to create_qflow_chart via GOT/IAT indirection
    return create_qflow_chart(/* forwarded args */);
}

